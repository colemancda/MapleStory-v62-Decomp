/* FUN_00469321 - 0x00469321 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00469321(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_0045d247(*(undefined2 *)(param_1 + 0x68));
  if ((*(byte *)(param_1 + 0x68) & 1) != 0) {
    uVar1 = FUN_0045e2eb();
    FUN_00457d37(uVar1);
  }
  if ((*(byte *)(param_1 + 0x68) & 2) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x1c));
  }
  if ((*(byte *)(param_1 + 0x68) & 8) != 0) {
    FUN_00457cda(*(undefined1 *)(param_1 + 0x24));
  }
  if ((*(byte *)(param_1 + 0x68) & 4) != 0) {
    FUN_00457d37(*(undefined4 *)(param_1 + 0x20));
  }
  if ((*(byte *)(param_1 + 0x68) & 0x10) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x28));
  }
  if ((*(byte *)(param_1 + 0x68) & 0x20) != 0) {
    FUN_00457d37(*(undefined4 *)(param_1 + 0x2c));
  }
  if ((*(byte *)(param_1 + 0x68) & 0x40) != 0) {
    FUN_00457d37(*(undefined4 *)(param_1 + 0x30));
  }
  if ((*(byte *)(param_1 + 0x68) & 0x80) != 0) {
    FUN_00457cda(*(undefined1 *)(param_1 + 0x34));
  }
  if ((*(byte *)(param_1 + 0x69) & 1) != 0) {
    FUN_00457cda(*(undefined1 *)(param_1 + 0x3c));
  }
  if ((*(byte *)(param_1 + 0x69) & 2) != 0) {
    FUN_00457cda(*(undefined1 *)(param_1 + 0x40));
  }
  if ((*(byte *)(param_1 + 0x69) & 4) != 0) {
    FUN_00457cda(*(undefined1 *)(param_1 + 0x44));
  }
  if ((*(byte *)(param_1 + 0x69) & 8) != 0) {
    FUN_00457cda(*(undefined1 *)(param_1 + 0x48));
  }
  if ((*(byte *)(param_1 + 0x69) & 0x10) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x4c));
  }
  if ((*(byte *)(param_1 + 0x69) & 0x20) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x50));
  }
  if ((*(byte *)(param_1 + 0x69) & 0x40) != 0) {
    FUN_0045d247(*(undefined2 *)(param_1 + 0x54));
  }
  if ((*(byte *)(param_1 + 0x69) & 0x80) != 0) {
    if (*(int *)(param_1 + 0x5c) == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(*(int *)(param_1 + 0x5c) + -4);
    }
    FUN_00457cda(iVar3);
    iVar2 = 0;
    if (0 < iVar3) {
      do {
        FUN_00457d37(*(undefined4 *)(*(int *)(param_1 + 0x5c) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar3);
    }
  }
  return;
}


