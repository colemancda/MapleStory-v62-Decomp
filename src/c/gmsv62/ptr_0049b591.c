/* ptr_0049b591 - 0x0049b591 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __thiscall ptr_0049b591(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = 1;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x24);
  }
  if (iVar2 != 0) {
    FUN_004b3daf();
    if (param_2 == 0) {
      if (*(int *)(param_1 + 0x4c) == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x4c) + 4;
      }
      if (*(int *)(DAT_00978364 + 0x80) != iVar1) {
        FUN_0049e52b();
      }
    }
  }
  return iVar2;
}


