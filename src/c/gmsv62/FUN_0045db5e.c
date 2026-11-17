/* FUN_0045db5e - 0x0045db5e in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0045db5e(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_1 / 100 == 0x2b70) && (param_1 != 0x10f7c0)) {
    FUN_0045a236(param_2);
  }
  else {
    iVar1 = param_1 / 10000;
    if (iVar1 == 0x38e) {
      FUN_00459375(param_2);
    }
    else if ((param_2 < 80000000) || (89999999 < param_2)) {
      if ((param_1 / 100 == 0x2b78) && (param_1 % 10 < 3)) {
        FUN_0045ac93(param_2);
      }
      else if (iVar1 == 0x21f) {
        FUN_004584ae(param_2);
      }
      else if (iVar1 == 0x38f) {
        FUN_0045a934(param_2);
      }
      else if (param_1 == 5400000) {
        FUN_0045a5e7(param_2);
      }
      else if (param_1 == 0x5269a8) {
        FUN_0045a743(param_2);
      }
      else {
        FUN_00458ea3(param_2);
      }
    }
    else {
      FUN_0045970a(param_2);
    }
  }
  return;
}


