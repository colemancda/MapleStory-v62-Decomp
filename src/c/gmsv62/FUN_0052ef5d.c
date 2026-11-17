/* FUN_0052ef5d - 0x0052ef5d in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0052ef5d(void)

{
  short sVar1;
  undefined4 *puVar2;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 auStack_24 [4];
  undefined4 uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  FUN_00879bb8();
  uStack_14 = 0x52ef75;
  uStack_14 = FUN_0042452b();
  uStack_14 = uStack_14 & 0xff;
  *(undefined4 *)(extraout_ECX + 0x18) = 0;
  if (uStack_14 < 0x48) {
    if (uStack_14 != 0x47) {
      if (uStack_14 != 0x3f) {
        if (uStack_14 < 0x42) goto LAB_0052f03e;
        if (uStack_14 < 0x44) goto LAB_0052efc8;
        if (uStack_14 != 0x44) goto LAB_0052f03e;
      }
      iStack_18 = 0x52efa8;
      FUN_0052f126();
      uStack_14 = 0x52efaf;
      FUN_0052a7a4();
      goto LAB_0052f03e;
    }
  }
  else {
    if (uStack_14 == 0x48) {
      uStack_14 = 0x52efda;
      sVar1 = FUN_00424561();
      *(undefined4 *)(unaff_EBP + 8) = 0;
      uStack_14 = 0x1191;
      iStack_18 = unaff_EBP + -0x10;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_1c = 0x52eff5;
      puVar2 = (undefined4 *)FUN_00679d22();
      iStack_18 = *puVar2;
      uStack_14 = (uint)sVar1;
      iStack_1c = unaff_EBP + 8;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      uStack_20 = 0x52f009;
      FUN_00434e21();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      uStack_14 = 0x52f017;
      FUN_00414ebb();
      uStack_14 = 0;
      iStack_18 = 0;
      iStack_1c = 0;
      uStack_20 = 0;
      *(undefined1 **)(unaff_EBP + -0x14) = auStack_24;
      FUN_00450368(unaff_EBP + 8);
      FUN_007db3ad();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_14 = 0x52f03e;
      FUN_00414ebb();
      goto LAB_0052f03e;
    }
    if ((uStack_14 != 0x4f) && ((uStack_14 < 0x52 || (0x53 < uStack_14)))) goto LAB_0052f03e;
  }
LAB_0052efc8:
  iStack_18 = 0x52efd0;
  FUN_0052f126();
LAB_0052f03e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


