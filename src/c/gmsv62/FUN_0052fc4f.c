/* FUN_0052fc4f - 0x0052fc4f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052fc4f(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_EBP;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  int iStack_38;
  
  FUN_00879bb8();
  iStack_38 = 0x52fc69;
  uVar1 = FUN_0042452b();
  *(undefined1 *)(unaff_EBP + 0xb) = uVar1;
  iStack_38 = 0x52fc73;
  iStack_38 = FUN_0042459a();
  if (0 < iStack_38) {
    iStack_3c = unaff_EBP + -0x18;
    uStack_40 = 0x52fc8d;
    FUN_0045a1d8();
    *(undefined4 *)(unaff_EBP + -4) = 0;
    iStack_38 = 0x52fc97;
    uVar2 = FUN_0042459a();
    iStack_38 = 8;
    iStack_3c = unaff_EBP + -0x24;
    uStack_40 = 0x52fca6;
    FUN_004245d2();
    iStack_38 = unaff_EBP + -0x34;
    iStack_3c = unaff_EBP + -0x24;
    uStack_40 = 0x52fcb4;
    (*DAT_0097b4b0)();
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    uStack_40 = (uint)*(ushort *)(unaff_EBP + -0x28);
    uStack_44 = (uint)*(ushort *)(unaff_EBP + -0x2a);
    uStack_48 = (uint)*(ushort *)(unaff_EBP + -0x2c);
    uStack_4c = (uint)*(ushort *)(unaff_EBP + -0x2e);
    uStack_50 = (uint)*(ushort *)(unaff_EBP + -0x32);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00434e21(unaff_EBP + -0x14,s__d__d__d__d__d__d_009654d4,*(undefined2 *)(unaff_EBP + -0x34));
    if (*(char *)(unaff_EBP + 0xb) == '\x01') {
      uStack_40 = 0x117f;
      uStack_44 = unaff_EBP + 8;
      uStack_48 = 0x52fd06;
      puVar3 = (undefined4 *)FUN_00679d22();
      uStack_4c = *puVar3;
      uStack_44 = *(undefined4 *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uStack_48 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_50 = unaff_EBP - 0x10;
      uStack_40 = uVar2;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    else {
      uStack_40 = 0x1180;
      uStack_44 = unaff_EBP + -0x1c;
      uStack_48 = 0x52fd3c;
      puVar3 = (undefined4 *)FUN_00679d22();
      uStack_4c = *puVar3;
      uStack_44 = *(undefined4 *)(unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 4;
      uStack_48 = *(undefined4 *)(unaff_EBP + -0x14);
      uStack_50 = unaff_EBP - 0x10;
      uStack_40 = uVar2;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 2;
    }
    uStack_40 = 0x52fd62;
    FUN_00414ebb();
    uStack_40 = 0;
    uStack_44 = 0;
    uStack_48 = 0;
    uStack_4c = 0;
    *(uint **)(unaff_EBP + 8) = &uStack_50;
    FUN_00450368(unaff_EBP + -0x10);
    FUN_007db3ad();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    uStack_40 = 0x52fd89;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_40 = 0x52fd94;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    uStack_40 = 0x52fda0;
    FUN_00414ebb();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


