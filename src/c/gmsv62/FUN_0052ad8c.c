/* FUN_0052ad8c - 0x0052ad8c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0052ad8c(void)

{
  int iVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  uint local_20;
  
  FUN_00879bb8();
  iVar1 = *(int *)(extraout_ECX + 0x18);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    iVar1 = *(int *)(unaff_EBP + 0xc);
    if ((iVar1 < 10000000) && (0x6d < iVar1)) {
      uVar2 = *(undefined4 *)(unaff_EBP + 8);
      *(int *)(extraout_ECX + 0x1d3c) = iVar1;
      *(undefined4 *)(extraout_ECX + 0x1d40) = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined1 *)(extraout_ECX + 0x1d44) = *(undefined1 *)(unaff_EBP + 0x14);
      *(undefined1 *)(extraout_ECX + 0x1d45) = *(undefined1 *)(unaff_EBP + 0x18);
      local_20 = unaff_EBP + 0x1c;
      *(undefined4 *)(extraout_ECX + 0x1d38) = uVar2;
      iStack_24 = 0x52adfe;
      FUN_00414f8b();
      local_20 = 0;
      iStack_24 = 0;
      uStack_28 = 0xd9;
      uStack_2c = 0x52ae0d;
      FUN_0060142b();
      local_20 = 4;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iStack_24 = 0x52ae1b;
      FUN_00457cda();
      local_20 = *(uint *)(extraout_ECX + 0x1d38);
      iStack_24 = 0x52ae29;
      FUN_00457d37();
      local_20 = *(uint *)(extraout_ECX + 0x1d3c);
      iStack_24 = 0x52ae37;
      FUN_00457d37();
      local_20 = *(uint *)(extraout_ECX + 0x1d40);
      iStack_24 = 0x52ae45;
      FUN_00457d37();
      local_20 = (uint)*(byte *)(extraout_ECX + 0x1d45);
      iStack_24 = 0x52ae56;
      FUN_00457cda();
      local_20 = (uint)*(byte *)(extraout_ECX + 0x1d44);
      iStack_24 = 0x52ae67;
      FUN_00457cda();
      *(uint **)(unaff_EBP + 0x14) = &local_20;
      local_20 = 0;
      uStack_28 = 0x52ae75;
      iStack_24 = extraout_ECX + 0x1d48;
      FUN_00414f8b();
      iStack_24 = 0x52ae7d;
      FUN_00459cb5();
      local_20 = unaff_EBP - 0x1c;
      iStack_24 = 0x52ae8c;
      FUN_004751b2();
      uVar2 = 1;
      *(undefined4 *)(extraout_ECX + 0x18) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 0;
      local_20 = 0x52ae9d;
      FUN_0045ebca();
      goto LAB_0052aec3;
    }
    local_20 = 0;
    iStack_24 = 0;
    uStack_28 = 0;
    uStack_2c = 0;
    *(undefined1 **)(unaff_EBP + 0x14) = auStack_30;
    FUN_00679d22(auStack_30,0x1171);
    FUN_007db3ad();
  }
  uVar2 = 0;
LAB_0052aec3:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  local_20 = 0x52aecf;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


