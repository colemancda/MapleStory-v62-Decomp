/* FUN_0085cd50 - 0x0085cd50 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall FUN_0085cd50(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*param_1 + -4);
  }
  iVar1 = 0;
  if (param_1[1] != 0) {
    iVar1 = *(int *)(param_1[1] + -4);
  }
  if (iVar2 == iVar1) {
    if (param_1[1] == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(param_1[1] + -4);
    }
    iVar1 = 0;
    if (param_1[1] != 0) {
      iVar1 = *(int *)(param_1[1] + -4);
    }
    if (iVar2 == iVar1) {
      iVar2 = 0;
      if (param_1[1] != 0) {
        iVar2 = *(int *)(param_1[1] + -4);
      }
      iVar1 = 0;
      if (param_1[2] != 0) {
        iVar1 = *(int *)(param_1[2] + -4);
      }
      if (iVar2 == iVar1) {
        return 0;
      }
    }
  }
  FUN_0085c8b9();
  return 1;
}


