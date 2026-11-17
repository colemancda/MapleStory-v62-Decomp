/* FUN_005a72b3 - 0x005a72b3 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_005a72b3(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined1 auStack_40 [4];
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uStack_2c = 0x5a72cc;
  FUN_005a728b();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 800;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  *(undefined4 *)(unaff_EBP + -0x20) = 600;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  uStack_2c = 0x5d4;
  iStack_30 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  iStack_34 = 0x5a72fc;
  puVar1 = (undefined4 *)FUN_00679d86();
  iStack_34 = *puVar1;
  uStack_2c = 0;
  iStack_30 = *(undefined4 *)(unaff_EBP + 8);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iStack_38 = unaff_EBP + -0x14;
  iStack_3c = 0x5a7310;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_2c = 0x5a731f;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uStack_2c = 0x112e;
  iStack_30 = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_34 = 0x5a7336;
  puVar1 = (undefined4 *)FUN_00679d86();
  uStack_2c = *(undefined4 *)(unaff_EBP + 8);
  iStack_30 = *puVar1;
  iStack_34 = unaff_EBP + -0x10;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_38 = 0x5a7349;
  FUN_0041354c();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uStack_2c = 0x5a7358;
  FUN_00402676();
  uStack_2c = 30000;
  iStack_30 = 100;
  iStack_34 = 3;
  iStack_38 = 2000;
  iStack_3c = unaff_EBP + -0x2c;
  *(undefined1 **)(unaff_EBP + -0x1c) = auStack_40;
  FUN_004343e4(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  uVar2 = FUN_00411641();
  FUN_00424e82(uVar2);
  FUN_00428874(uVar2);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  uStack_2c = 0x5a739e;
  FUN_00402676();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uStack_2c = 0x5a73a9;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  uStack_2c = 0x5a73b5;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


