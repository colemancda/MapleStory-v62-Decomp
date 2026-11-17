/* FUN_00434f2c - 0x00434f2c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


bool __thiscall FUN_00434f2c(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  
  param_1 = (int *)*param_1;
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1;
  }
  if (iVar1 == param_2) {
    bVar2 = true;
  }
  else {
    if (param_1 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *param_1;
    }
    if ((iVar1 == 0) || (param_2 == 0)) {
      bVar2 = false;
    }
    else {
      if (param_1 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *param_1;
      }
      iVar1 = FUN_0087b08f(iVar1,param_2);
      bVar2 = iVar1 == 0;
    }
  }
  return bVar2;
}


