/* FUN_0082606c - 0x0082606c in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0082606c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int unaff_EBP;
  int unaff_EDI;
  int aiStack_2d8 [3];
  undefined *puStack_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  int iStack_2bc;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = extraout_ECX;
  iStack_2bc = 0x826088;
  iStack_2bc = (*DAT_0097b704)();
  uStack_2c0 = 0x82608e;
  FUN_0087ad78();
  iStack_2bc = 0x826094;
  FUN_0043cb7b();
  iStack_2bc = 0x826255;
  FUN_008292b7();
  iStack_2bc = 0x82625c;
  FUN_00866aa6();
  iStack_2bc = 0x380;
  uStack_2c0 = 0x82626d;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(int *)(unaff_EBP + -4) = unaff_EDI;
  if (iVar1 != unaff_EDI) {
    iStack_2bc = 0x82627e;
    FUN_0047a2ae();
  }
  iVar1 = *(int *)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  DAT_0097c2c8 = 0x10;
  iStack_2bc = 0x826296;
  FUN_00826a90();
  iStack_2bc = 0x82629d;
  FUN_00826ab0();
  *(undefined4 *)(DAT_00973abc + 0x38) = *(undefined4 *)(iVar1 + 4);
  iStack_2bc = 0x8262c0;
  FUN_008291c8();
  iStack_2bc = 0x8262c7;
  FUN_00826c3b();
  iStack_2bc = 0x8262de;
  FUN_0082920d();
  iStack_2bc = 0x8262e3;
  FUN_00829263();
  iStack_2bc = 0x8262ea;
  FUN_00826dab();
  iStack_2bc = unaff_EBP + -0x24;
  uStack_2c0 = 0x8262f4;
  uStack_2c0 = (*DAT_0097b540)();
  uStack_2c4 = 0x8262fb;
  (*DAT_0097b53c)();
  uStack_2c4 = 0x826342;
  FUN_00827654();
  uStack_2c4 = 0x826349;
  FUN_008278c7();
  uStack_2c4 = 300;
  uStack_2c8 = 0x826355;
  (*DAT_0097b3ec)();
  uStack_2c8 = 0x82635c;
  FUN_008279b8();
  uStack_2c8 = 300;
  puStack_2cc = (undefined *)0x826363;
  (*DAT_0097b3ec)();
  puStack_2cc = (undefined *)0x82636a;
  FUN_00827c8a();
  puStack_2cc = (undefined *)0x826371;
  FUN_00826d48();
  puStack_2cc = (undefined *)0x0;
  aiStack_2d8[2] = 0;
  aiStack_2d8[1] = 0x826380;
  FUN_0047c31f();
  puStack_2cc = (undefined *)0x826385;
  FUN_0082911b();
  puStack_2cc = (undefined *)0x82638c;
  FUN_00405efe();
  puStack_2cc = (undefined *)0x826391;
  FUN_00829171();
  puStack_2cc = (undefined *)0x826396;
  FUN_008292f9();
  puStack_2cc = (undefined *)0x82639d;
  FUN_0059d2c6();
  puStack_2cc = (undefined *)0x8263a2;
  FUN_00828e4d();
  puStack_2cc = (undefined *)0x8263a9;
  iVar2 = FUN_0062a8dc();
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -0x10) = 0x22000006;
    puStack_2cc = &DAT_008f7260;
    aiStack_2d8[2] = unaff_EBP + -0x10;
    *(undefined4 *)(unaff_EBP + -4) = 2;
                    /* WARNING: Subroutine does not return */
    aiStack_2d8[1] = 0x8263cd;
    __CxxThrowException_8();
  }
  puStack_2cc = (undefined *)0x8263d2;
  FUN_00828ee8();
  puStack_2cc = (undefined *)0x8263d9;
  iVar2 = FUN_005dee4d();
  if (iVar2 == 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0x22000006;
    *(undefined4 *)(unaff_EBP + -0x14) = 0x22000006;
    puStack_2cc = &DAT_008f7260;
    aiStack_2d8[2] = unaff_EBP + -0x14;
    *(undefined4 *)(unaff_EBP + -4) = 3;
                    /* WARNING: Subroutine does not return */
    aiStack_2d8[1] = 0x8263fd;
    __CxxThrowException_8();
  }
  puStack_2cc = *(undefined **)(iVar1 + 4);
  aiStack_2d8[2] = 0x82640b;
  FUN_00866ae3();
  puStack_2cc = (undefined *)0x104;
  aiStack_2d8[2] = unaff_EBP + -0x128;
  aiStack_2d8[1] = 0;
  aiStack_2d8[0] = 0x82641e;
  (*DAT_0097b384)();
  aiStack_2d8[0] = unaff_EBP + -0x128;
  FUN_008280b0();
  FUN_008280f6(unaff_EBP + -0x128);
  FUN_008280d3(unaff_EBP + -0x128);
  *(int **)(unaff_EBP + -0x10) = aiStack_2d8;
  aiStack_2d8[0] = 0;
  FUN_00414edd(unaff_EBP + -0x128,0xffffffff);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004f14ee();
  FUN_0047abde();
  aiStack_2d8[0] = 0x38;
  iVar1 = FUN_004029b9();
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if (iVar1 == 0) {
    uVar3 = 0;
  }
  else {
    aiStack_2d8[0] = 0x826487;
    uVar3 = FUN_00596891();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  aiStack_2d8[0] = 0;
  FUN_0065ce47(uVar3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


