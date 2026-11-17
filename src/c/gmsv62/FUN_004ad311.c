/* FUN_004ad311 - 0x004ad311 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004ad311(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_14;
  
  iVar3 = param_2;
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar3 = param_3;
  }
  if ((((*(int *)(param_1 + 0x3c) < 2) || (param_2 < 0)) || (*(int *)(param_1 + 0x1c) <= param_2))
     || ((param_3 < 0 || (*(int *)(param_1 + 0x20) <= param_3)))) {
    uStack_14 = 100;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x4c);
    if (iVar1 < iVar3) {
      if (iVar3 < *(int *)(param_1 + 0x50) - iVar1) {
        iVar2 = ((*(int *)(param_1 + 0x50) + iVar1 * -3) * *(int *)(param_1 + 0x38)) /
                (*(int *)(param_1 + 0x3c) + -1) + iVar1;
        if (iVar2 <= iVar3) {
          if (iVar3 <= iVar1 + iVar2) {
            return 0x69;
          }
          if (iVar2 <= iVar3) {
            return 0x68;
          }
        }
        uStack_14 = 0x67;
      }
      else {
        uStack_14 = 0x66;
      }
    }
    else {
      uStack_14 = 0x65;
    }
  }
  return uStack_14;
}


