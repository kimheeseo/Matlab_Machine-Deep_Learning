/*
 * _coder_classifyVibration_info.c
 *
 * Code generation for function 'classifyVibration'
 *
 */

/* Include files */
#include "_coder_classifyVibration_info.h"
#include "emlrt.h"
#include "tmwtypes.h"

/* Function Declarations */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void);

/* Function Definitions */
static const mxArray *emlrtMexFcnResolvedFunctionsInfo(void)
{
  const mxArray *nameCaptureInfo;
  const char_T *data[6] = {
    "789ce555416fd330147e4143e2c0a05c38efc40535ee2a24a0b7910dd844bb42536d684ce0266e1be6c49ded6e9d90802337fe01bf805fc02fe0072071e17770"
    "4113bcb84d1b22a2566c74025c39cf9fbfe7f73d3fa70e58eb550b002ec1b0bdbe38b48bd8ef215118cd9f839f5b96b7327e31fef66ae27f1e160c5e4cf1f1fa",
    "b723ec8948b3811e8288866cbcd2176110d148bb473d069229c10f986f9876c0991b84ac9106b518857753d418c4543c76baccdb6bf443905d35c990a781a947"
    "9cdfb3d47ee3fc93fd2efca21e693edbac0ccefafd2f7adbd6efe925f15fe4e85d19d9af23bb034dd805072a4070a4005f1d7c12e801853e70788e36820ece6c",
    "a265b08a7c0007385a8222f62af21abab00502993db376155985638d733dc46528615f86a7d040bf223e3751f1f8fbf047601f9502f0704511fd7d08d11e8ee3"
    "754d9422ce5244da6448d08be18cc0986b5043ec60ae31af3052db448bf30ad023c21c85f1e7609b281aa69febe519eb9cb513ff0bc6ffddf2672b7dae7f5aef",
    "e5fb2fe579ea25edacf40639f166fd9f5ccdd12b64f8db47f5e66a87d625970fc3a67fff26dd38dc5f9be4519fa2332d0fc8c1f38aff3167fdac75ece6c42f64"
    "f89df56d67d7a990ba141d49c3a5f83ba34875c57db072873c2a97caa516d142f0961810a5a956c4e35429c93ae4fa64c419955110c573c267923822ec514fd7",
    "25f3034f0b6987c9bede9c705fd7a6ec2be193dcec2435db64d6d70157b62b69a4da428667f73d39e9f9b6a7e8253c9e6fedd4cfd754918cab68cf50c7d3ba6f"
    "2a1f3ecdf5fe8627c77cae7aa3f6afdfdf1bd475fbd4df92ad9aeedd787c6b502a0be9fcfdf7f70f49a83373",
    "" };

  nameCaptureInfo = NULL;
  emlrtNameCaptureMxArrayR2016a(&data[0], 3224U, &nameCaptureInfo);
  return nameCaptureInfo;
}

mxArray *emlrtMexFcnProperties(void)
{
  mxArray *xEntryPoints;
  mxArray *xInputs;
  mxArray *xResult;
  const char_T *epFieldName[6] = { "Name", "NumberOfInputs", "NumberOfOutputs",
    "ConstantInputs", "FullPath", "TimeStamp" };

  const char_T *propFieldName[4] = { "Version", "ResolvedFunctions",
    "EntryPoints", "CoverageInfo" };

  xEntryPoints = emlrtCreateStructMatrix(1, 1, 6, epFieldName);
  xInputs = emlrtCreateLogicalMatrix(1, 1);
  emlrtSetField(xEntryPoints, 0, "Name", emlrtMxCreateString("classifyVibration"));
  emlrtSetField(xEntryPoints, 0, "NumberOfInputs", emlrtMxCreateDoubleScalar(1.0));
  emlrtSetField(xEntryPoints, 0, "NumberOfOutputs", emlrtMxCreateDoubleScalar
                (1.0));
  emlrtSetField(xEntryPoints, 0, "ConstantInputs", xInputs);
  emlrtSetField(xEntryPoints, 0, "FullPath", emlrtMxCreateString(
    "C:\\Users\\pauljang\\OneDrive - MathWorks\\Desktop\\2021_SW-SOC°ü·Ã\\quick-pdm-workshop-master\\demo_EN\\classifyVibration.m"));
  emlrtSetField(xEntryPoints, 0, "TimeStamp", emlrtMxCreateDoubleScalar
                (738261.46990740742));
  xResult = emlrtCreateStructMatrix(1, 1, 4, propFieldName);
  emlrtSetField(xResult, 0, "Version", emlrtMxCreateString(
    "9.9.0.1467703 (R2020b)"));
  emlrtSetField(xResult, 0, "ResolvedFunctions", (mxArray *)
                emlrtMexFcnResolvedFunctionsInfo());
  emlrtSetField(xResult, 0, "EntryPoints", xEntryPoints);
  return xResult;
}

/* End of code generation (_coder_classifyVibration_info.c) */
