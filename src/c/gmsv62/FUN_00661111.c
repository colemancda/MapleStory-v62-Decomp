/* FUN_00661111 - 0x00661111 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00661111(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_0042459a();
  if ((uVar1 & 1) != 0) {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  if ((uVar1 & 2) != 0) {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x14) = uVar2;
  }
  if ((uVar1 & 4) != 0) {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x20) = uVar2;
  }
  if ((uVar1 & 8) != 0) {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  if ((uVar1 & 0x10) != 0) {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x38) = uVar2;
  }
  if ((uVar1 & 0x20) != 0) {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x44) = uVar2;
  }
  if ((uVar1 & 0x40) != 0) {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x50) = uVar2;
  }
  if ((uVar1 & 0x80) != 0) {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x5c) = uVar2;
  }
  if ((uVar1 & 0x100) != 0) {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x68) = uVar2;
  }
  if ((uVar1 & 0x200) != 0) {
    FUN_00424561();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x74) = uVar2;
  }
  if ((uVar1 & 0x400) != 0) {
    FUN_0042452b();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x80) = uVar2;
  }
  if ((uVar1 & 0x800) != 0) {
    FUN_0042452b();
    uVar2 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x8c) = uVar2;
  }
  return;
}


