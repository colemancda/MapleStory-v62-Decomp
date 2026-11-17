/* FUN_0084d0d6 - 0x0084d0d6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0084d0d6(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int unaff_EBP;
  undefined1 auStack_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  FUN_00879bb8();
  uStack_c = 0x84d0ea;
  cVar2 = FUN_0042452b();
  if (cVar2 == '\0') {
    uStack_c = 0x84d122;
    uVar3 = FUN_0042452b();
    iVar1 = *(int *)(*(int *)(DAT_00978358 + 0x1744) + 4 + (uVar3 & 0xff) * 8);
    if (iVar1 != 0) {
      uStack_c = 0x8e5;
      iStack_10 = unaff_EBP + 8;
      uStack_14 = 0x84d14c;
      puVar4 = (undefined4 *)FUN_00679d86();
      iStack_10 = *puVar4;
      uStack_14 = **(undefined4 **)(iVar1 + 0x78);
      uStack_c = 100;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      uStack_18 = 0x84d15f;
      FUN_007d48c3();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      uStack_c = 0x84d16e;
      FUN_00402676();
    }
  }
  else if (cVar2 == '\x01') {
    uStack_c = 0;
    iStack_10 = 0;
    uStack_14 = 0;
    uStack_18 = 0;
    *(undefined1 **)(unaff_EBP + 8) = auStack_1c;
    FUN_00679d22(auStack_1c,0xe88);
    FUN_007db3ad();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


