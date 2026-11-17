/* FUN_004d91de - 0x004d91de in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004d91de(void)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  undefined4 local_10;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0x8c) = *(undefined4 *)(unaff_EBP + 0x18);
  puStack_18 = (undefined1 *)&local_10;
  if (iVar1 == 0) {
    puStack_14 = (undefined1 *)(unaff_EBP + 0xc);
    *(undefined4 **)(unaff_EBP + 0x18) = &local_10;
    local_10 = 0;
    puStack_18 = (undefined1 *)0x4d924f;
    FUN_00414f8b();
    puStack_14 = (undefined1 *)(extraout_ECX + 0x88);
    puStack_18 = (undefined1 *)0x4d925b;
    FUN_007d2b71();
  }
  else {
    *(undefined4 **)(unaff_EBP + 0x18) = &local_10;
    puStack_14 = (undefined1 *)0xf;
    FUN_007d4a9a();
    puStack_18 = puStack_14;
    puStack_14 = (undefined1 *)0xc8;
    *(undefined1 ***)(unaff_EBP + 0x14) = &puStack_18;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00450368(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_007d2c14(extraout_ECX + 0x88);
  }
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    local_10 = 0x4d4;
    puStack_14 = (undefined1 *)(unaff_EBP + 0x10);
    puStack_18 = (undefined1 *)0x4d9275;
    puVar2 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else {
    local_10 = 0xffffffff;
    puStack_14 = *(undefined1 **)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + 0x18) = 0;
    puStack_18 = (undefined1 *)0x4d9292;
    FUN_004184ca();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    puVar2 = (undefined4 *)(unaff_EBP + 0x18);
    *(undefined4 *)(unaff_EBP + -4) = 3;
  }
  local_10 = *puVar2;
  puStack_14 = (undefined1 *)0x4d92aa;
  FUN_007d3cdd();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    local_10 = 0x4d92c4;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    local_10 = 0x4d92d5;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_10 = 0x4d92e1;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


