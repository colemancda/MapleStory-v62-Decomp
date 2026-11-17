/* FUN_00545cee - 0x00545cee in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00545cee(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_00545de0();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x6a0) + 4) + 0x24))(0);
  if (*(int *)(*(int *)(param_1 + 0x194) + 0x68) == 5) {
    FUN_00545deb(0);
    (**(code **)(*(int *)(*(int *)(param_1 + 0x6a0) + 4) + 0x24))(1);
    return;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x194) + 0x54);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + -4);
  }
  FUN_00545deb(uVar2);
  return;
}


