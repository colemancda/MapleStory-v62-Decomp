/* FUN_0067f31f - 0x0067f31f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0067f31f(void)

{
  undefined4 uVar1;
  int extraout_ECX;
  int unaff_EBP;
  undefined4 uVar2;
  undefined1 auStack_28 [4];
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    uStack_18 = 0xaef;
    iStack_1c = unaff_EBP + 8;
    uStack_20 = 0x67f350;
    uStack_18 = FUN_00679d86();
    *(undefined1 *)(unaff_EBP + -4) = 1;
    iStack_1c = 0x67f35d;
    FUN_00419192();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    uStack_18 = 0x67f368;
    FUN_00402676();
  }
  uStack_18 = 0xc00614a4;
  *(int **)(unaff_EBP + -0x14) = &iStack_1c;
  uStack_20 = 0;
  uStack_24 = 0x67f379;
  FUN_00424e0a();
  uStack_20 = 0;
  uStack_24 = 0;
  *(undefined1 **)(unaff_EBP + -0x18) = auStack_28;
  FUN_00433bdf(extraout_ECX + 0x134);
  uVar2 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_00411641(0);
  FUN_00424e82(uVar1);
  FUN_0042b613(uVar1,uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_18 = 0x67f3b2;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


