FROM registry.access.redhat.com/ubi8/ubi:8.9-1136

# Provide your own RHEL subscription
ARG RHEL8_ORG
ARG RHEL8_ACTIVATION_KEY

RUN subscription-manager register --org=$RHEL8_ORG --activationkey=$RHEL8_ACTIVATION_KEY

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
RUN curl --fail -LO https://github.com/Kitware/CMake/releases/download/v3.28.3/cmake-3.28.3-linux-x86_64.tar.gz \
  && tar -xvf cmake-3.28.3-linux-x86_64.tar.gz \
  && rm cmake-3.28.3-linux-x86_64.tar.gz

# Clone & bootstrap vcpkg
WORKDIR /
RUN git clone https://github.com/microsoft/vcpkg.git \
  && ./vcpkg/bootstrap-vcpkg.sh -disableMetrics

# Install root user .bashrc
COPY .bashrc /root/

ENTRYPOINT [ "bash" ]
