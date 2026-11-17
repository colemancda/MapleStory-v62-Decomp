/* FUN_007876c7 - 0x007876c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007876c7(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 4);
  if (*(int *)(param_2 + 4) == 0) {
    iVar2 = DAT_00980dfc;
  }
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = DAT_00980dfc;
  }
  iVar1 = FUN_008858f0(iVar1,iVar2);
  iVar2 = *(int *)(param_3 + 4);
  if (iVar1 < 0) {
    if (iVar2 == 0) {
      iVar2 = DAT_00980dfc;
    }
    iVar1 = *(int *)(param_2 + 4);
    if (*(int *)(param_2 + 4) == 0) {
      iVar1 = DAT_00980dfc;
    }
    iVar2 = FUN_008858f0(iVar1,iVar2);
    if (-1 < iVar2) {
      iVar2 = *(int *)(param_3 + 4);
      if (*(int *)(param_3 + 4) == 0) {
        iVar2 = DAT_00980dfc;
      }
      iVar1 = *(int *)(param_1 + 4);
      if (*(int *)(param_1 + 4) == 0) {
        iVar1 = DAT_00980dfc;
      }
      iVar2 = FUN_008858f0(iVar1,iVar2);
      if (-1 < iVar2) {
        return param_1;
      }
      return param_3;
    }
  }
  else {
    if (iVar2 == 0) {
      iVar2 = DAT_00980dfc;
    }
    iVar1 = *(int *)(param_1 + 4);
    if (*(int *)(param_1 + 4) == 0) {
      iVar1 = DAT_00980dfc;
    }
    iVar2 = FUN_008858f0(iVar1,iVar2);
    if (iVar2 < 0) {
      return param_1;
    }
    iVar2 = *(int *)(param_3 + 4);
    if (*(int *)(param_3 + 4) == 0) {
      iVar2 = DAT_00980dfc;
    }
    iVar1 = *(int *)(param_2 + 4);
    if (*(int *)(param_2 + 4) == 0) {
      iVar1 = DAT_00980dfc;
    }
    iVar2 = FUN_008858f0(iVar1,iVar2);
    if (iVar2 < 0) {
      return param_3;
    }
  }
  return param_2;
}


