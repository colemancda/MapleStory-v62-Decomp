/* FUN_007db991 - 0x007db991 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007db991(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar1 = *(int *)(unaff_EBP + 0x1c);
  *(undefined4 *)(extraout_ECX + 0x74) = *(undefined4 *)(unaff_EBP + 8);
  iVar2 = *(int *)(unaff_EBP + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(extraout_ECX + 0xa4) = *(undefined4 *)(unaff_EBP + 0x18);
  puStack_1c = (undefined1 *)&local_14;
  if (iVar2 == 0) {
    puStack_18 = (undefined1 *)(unaff_EBP + 0xc);
    *(undefined4 **)(unaff_EBP + 8) = &local_14;
    local_14 = 0;
    puStack_1c = (undefined1 *)0x7dba15;
    FUN_00414f8b();
    puStack_18 = (undefined1 *)(extraout_ECX + 0xa0);
    puStack_1c = (undefined1 *)0x7dba21;
    FUN_007d2b71();
  }
  else {
    *(undefined4 **)(unaff_EBP + 8) = &local_14;
    puStack_18 = (undefined1 *)0xf;
    FUN_007d4a9a();
    puStack_1c = puStack_18;
    *(undefined1 ***)(unaff_EBP + 0x18) = &puStack_1c;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    puStack_18 = (undefined1 *)((-(uint)(iVar1 != 0) & 0x22) + 200);
    FUN_00450368(unaff_EBP + 0xc);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_007d2c14(extraout_ECX + 0xa0);
  }
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    local_14 = 0x4d4;
    puStack_18 = (undefined1 *)(unaff_EBP + 0x10);
    puStack_1c = (undefined1 *)0x7dba3b;
    puVar3 = (undefined4 *)FUN_00679d86();
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 2;
  }
  else {
    local_14 = 0xffffffff;
    puStack_18 = *(undefined1 **)(unaff_EBP + 0x10);
    *(undefined4 *)(unaff_EBP + 8) = 0;
    puStack_1c = (undefined1 *)0x7dba58;
    FUN_004184ca();
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    puVar3 = (undefined4 *)(unaff_EBP + 8);
    *(undefined4 *)(unaff_EBP + -4) = 3;
  }
  local_14 = *puVar3;
  puStack_18 = (undefined1 *)0x7dba70;
  FUN_007d3cdd();
  *(undefined4 *)(unaff_EBP + -4) = 2;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    local_14 = 0x7dba8a;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    local_14 = 0x7dba9b;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_14 = 0x7dbaa7;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


