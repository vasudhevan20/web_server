# Distributed under the OSI-approved MIT License.  See accompanying
# file LICENSE or https://github.com/Crascit/DownloadProject for details.

cmake_minimum_required(VERSION 2.8.2)

project(orcania-download NONE)

include(ExternalProject)
ExternalProject_Add(orcania-download
                    URL;https://github.com/babelouest/orcania/archive/v2.1.0.tar.gz
                    SOURCE_DIR          "/home/elmpc-158/rockchip_build/buildroot/output/build/ulfius-48e13c7e2d6bb55f113b2c8929983b7dd4139d26/orcania-src"
                    BINARY_DIR          "/home/elmpc-158/rockchip_build/buildroot/output/build/ulfius-48e13c7e2d6bb55f113b2c8929983b7dd4139d26/orcania-build"
                    CONFIGURE_COMMAND   ""
                    BUILD_COMMAND       ""
                    INSTALL_COMMAND     ""
                    TEST_COMMAND        ""
)
