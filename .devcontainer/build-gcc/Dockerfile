ARG BASE_IMAGE_NAME
ARG BASE_IMAGE_TAG
FROM $BASE_IMAGE_NAME:$BASE_IMAGE_TAG

# Provide your own RHEL subscription
RUN --mount=type=secret,id=RHEL8_ORG \
  --mount=type=secret,id=RHEL8_ACTIVATION_KEY \
  subscription-manager register \
  --org=$(cat /run/secrets/RHEL8_ORG) \
  --activationkey=$(cat /run/secrets/RHEL8_ACTIVATION_KEY)

# Install tools
#
# clang-tools-extra for clang-format
# gcc-toolset-13 compiler
# vim-enhanced for color vi support in git
# zip/unzip for vcpkg
#
RUN dnf update -y \
  && dnf -y install \
  clang-tools-extra \
  gcc-toolset-13 \
  git \
  unzip \
  vim-enhanced \
  zip \
  && dnf clean all \
  && rm -rf /var/cache/yum

# Install cmake
WORKDIR /opt
RUN curl --fail -LO https://github.com/Kitware/CMake/releases/download/v3.30.1/cmake-3.30.1-linux-x86_64.tar.gz \
  && tar -xvf cmake-3.30.1-linux-x86_64.tar.gz \
  && rm cmake-3.30.1-linux-x86_64.tar.gz

# 🧑‍💻 Create the developer (non-root) user
ARG USERNAME
ARG USER_UID=1000
ARG USER_GID=$USER_UID

# Create the user and group
# Don't add sudo to build container
RUN groupadd --gid $USER_GID $USERNAME \
  && useradd -s /bin/bash --uid $USER_UID --gid $USER_GID -m $USERNAME

# Install the .bashrc for the user
COPY .bashrc /home/$USERNAME
RUN chown $USER_UID:$USERNAME "/home/$USERNAME/.bashrc" \
  && chmod 644 "/home/$USERNAME/.bashrc"

# 🌊 Setup the container environment

# Add cmake to path
ENV CMAKE_HOME="/opt/cmake-3.30.1-linux-x86_64"
ENV PATH="$CMAKE_HOME/bin:$PATH"

# Add gcc to path
ENV PATH="/opt/rh/gcc-toolset-13/root/usr/bin:$PATH"

# Change default user (to you) for the remainder
USER $USERNAME

# ⭕ Install vcpkg. Clone & bootstrap
#
# Install to user $HOME folder since / requires root permissions.
#
WORKDIR /home/$USERNAME
RUN git clone https://github.com/microsoft/vcpkg.git \
&& ./vcpkg/bootstrap-vcpkg.sh -disableMetrics

# Set vcpkg root to install folder
ENV VCPKG_ROOT="/home/$USERNAME/vcpkg"
ENV PATH="$VCPKG_ROOT:$PATH"

CMD [ "bash" ]
