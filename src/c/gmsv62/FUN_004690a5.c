/* FUN_004690a5 - 0x004690a5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004690a5(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iStack00000004;
  
  FUN_00457d37(*(undefined4 *)(param_1 + 0xc));
  uVar1 = FUN_0045e2eb();
  FUN_00457d37(uVar1);
  FUN_0045d247(*(undefined2 *)(param_1 + 0x1c));
  FUN_00457cda(*(undefined1 *)(param_1 + 0x24));
  FUN_00457d37(*(undefined4 *)(param_1 + 0x20));
  FUN_0045d247(*(undefined2 *)(param_1 + 0x28));
  FUN_00457d37(*(undefined4 *)(param_1 + 0x2c));
  FUN_00457d37(*(undefined4 *)(param_1 + 0x30));
  FUN_00457cda(*(undefined1 *)(param_1 + 0x34));
  FUN_00457cda(*(undefined1 *)(param_1 + 0x3c));
  FUN_00457cda(*(undefined1 *)(param_1 + 0x40));
  FUN_00457cda(*(undefined1 *)(param_1 + 0x44));
  FUN_00457cda(*(undefined1 *)(param_1 + 0x48));
  FUN_0045d247(*(undefined2 *)(param_1 + 0x4c));
  FUN_0045d247(*(undefined2 *)(param_1 + 0x50));
  FUN_0045d247(*(undefined2 *)(param_1 + 0x54));
  iVar2 = 0;
  if (*(int *)(param_1 + 0x5c) == 0) {
    iStack00000004 = 0;
  }
  else {
    iStack00000004 = *(int *)(*(int *)(param_1 + 0x5c) + -4);
  }
  FUN_00457cda(iStack00000004);
  if (0 < iStack00000004) {
    do {
      FUN_00457d37(*(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack00000004);
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    iStack00000004 = 0;
  }
  else {
    iStack00000004 = *(int *)(*(int *)(param_1 + 0x60) + -4);
  }
  FUN_00457cda(iStack00000004);
  iVar2 = 0;
  if (0 < iStack00000004) {
    do {
      FUN_00457d37(*(undefined4 *)(*(int *)(param_1 + 0x60) + iVar2 * 4));
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack00000004);
  }
  return;
}


