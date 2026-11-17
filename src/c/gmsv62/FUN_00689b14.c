/* FUN_00689b14 - 0x00689b14 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00689b14(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int extraout_ECX;
  int unaff_EBP;
  int iStack_9c;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  cVar1 = FUN_0042452b();
  uVar2 = FUN_0042459a();
  *(undefined4 *)(unaff_EBP + -0x54) = uVar2;
  iStack_9c = unaff_EBP + -0x54;
  iVar3 = FUN_0068a1b0();
  if (iVar3 != 0) {
    *(int **)(unaff_EBP + 8) = &iStack_9c;
    iStack_9c = extraout_ECX;
    FUN_0068a14e();
    FUN_0068a081();
    if (cVar1 == '\0') {
      *(undefined4 *)(unaff_EBP + 8) = *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 0x14);
      FUN_00424ed4();
      *(undefined4 *)(unaff_EBP + -0x10) = *(undefined4 *)(*(int *)(unaff_EBP + -0x2c) + 0x18);
      FUN_00424ed4();
      iStack_9c = 0;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int *)(unaff_EBP + 8) == 0) {
        iStack_9c = 0x689bca;
        FUN_00878dfb();
      }
      iStack_9c = unaff_EBP + -0x18;
      FUN_00425067();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x689bed;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689bf8;
        FUN_00878dfb();
      }
      iStack_9c = -2;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (*(int *)(unaff_EBP + 8) == 0) {
        iStack_9c = 0x689c16;
        FUN_00878dfb();
      }
      iStack_9c = unaff_EBP + -0x14;
      FUN_0041141a();
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x689c3b;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689c46;
        FUN_00878dfb();
      }
      iStack_9c = 0x689c54;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_9c = 0x689c61;
      FUN_00403191();
      iStack_9c = 0;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_004031b7();
      iStack_9c = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      FUN_004031b7();
      iStack_9c = 1000;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (*(int *)(unaff_EBP + 8) == 0) {
        iStack_9c = 0x689ca9;
        FUN_00878dfb();
      }
      iStack_9c = unaff_EBP + -0x40;
      FUN_004250ac(unaff_EBP + -0x84,*(undefined4 *)(unaff_EBP + -0x18),unaff_EBP + -0x50,
                   unaff_EBP + -0x74,unaff_EBP + -100);
      iStack_9c = 0x689cdb;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689ce6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_9c = 0x689cf3;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689cfe;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 9;
      iStack_9c = 0x689d0b;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689d16;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_9c = 0x689d23;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689d2e;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_9c = 0x689d3b;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689d46;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x689d53;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689d5e;
        FUN_00878dfb();
      }
      iStack_9c = 0;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0xc;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iStack_9c = 0x689d7e;
        FUN_00878dfb();
      }
      iStack_9c = unaff_EBP + -0x14;
      puVar4 = (undefined4 *)FUN_00425067();
      iStack_9c = 0x689d98;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x18),
                 (IBinding *)*puVar4);
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x689dad;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689db8;
        FUN_00878dfb();
      }
      iStack_9c = -2;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0xd;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iStack_9c = 0x689dd8;
        FUN_00878dfb();
      }
      iStack_9c = unaff_EBP + -0x14;
      FUN_0041141a();
      FUN_004125e6();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x689dfd;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689e08;
        FUN_00878dfb();
      }
      iStack_9c = 0x689e11;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_9c = 0x689e1e;
      FUN_00403191();
      iStack_9c = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      FUN_004031b7();
      iStack_9c = 0xff;
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      FUN_004031b7();
      iStack_9c = 1000;
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 0x12;
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        iStack_9c = 0x689e60;
        FUN_00878dfb();
      }
      iStack_9c = unaff_EBP + -0x74;
      FUN_004250ac(unaff_EBP + -0x84,*(undefined4 *)(unaff_EBP + -0x18),unaff_EBP + -0x28,
                   unaff_EBP + -0x40,unaff_EBP + -100);
      iStack_9c = 0x689e92;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689e9d;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      iStack_9c = 0x689eaa;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689eb5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x10;
      iStack_9c = 0x689ec2;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689ecd;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      iStack_9c = 0x689eda;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689ee5;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      iStack_9c = 0x689ef2;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689efd;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x689f0a;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689f15;
        FUN_00878dfb();
      }
      iStack_9c = 0x689f1e;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_9c = 0x689f2b;
      FUN_00403191();
      piVar5 = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0x14;
      if (piVar5 == (int *)0x0) {
        iStack_9c = 0x689f40;
        FUN_00878dfb();
        piVar5 = *(int **)(unaff_EBP + 8);
      }
      iVar3 = *piVar5;
      iStack_9c = *(int *)(unaff_EBP + -0x38);
      *(int **)(unaff_EBP + -0x14) = piVar5;
      iVar3 = (**(code **)(iVar3 + 0x110))
                        (piVar5,0,*(undefined4 *)(unaff_EBP + -0x28),
                         *(undefined4 *)(unaff_EBP + -0x24),*(undefined4 *)(unaff_EBP + -0x20),
                         *(undefined4 *)(unaff_EBP + -0x1c),*(undefined4 *)(unaff_EBP + -0x40),
                         *(undefined4 *)(unaff_EBP + -0x3c));
      if (iVar3 < 0) {
        iStack_9c = *(int *)(unaff_EBP + -0x14);
        FUN_00878e09(iVar3);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x13;
      iStack_9c = 0x689f88;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689f93;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x689fa0;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689fab;
        FUN_00878dfb();
      }
      iStack_9c = 0x689fb4;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_9c = 0x689fc1;
      FUN_00403191();
      iStack_9c = unaff_EBP + -0x28;
      uVar2 = 0;
      *(undefined1 *)(unaff_EBP + -4) = 0x16;
      FUN_00424e27(0);
      FUN_00425139(uVar2);
      *(undefined1 *)(unaff_EBP + -4) = 0x15;
      iStack_9c = 0x689feb;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x689ff6;
        FUN_00878dfb();
      }
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x68a003;
      iVar3 = FUN_00402bc3();
      if (iVar3 < 0) {
        iStack_9c = 0x68a00e;
        FUN_00878dfb();
      }
      iStack_9c = unaff_EBP + 8;
      *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff68;
      FUN_0041160e();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x68a026;
      FUN_00424e82();
      iStack_9c = 0x68a02d;
      FUN_00427af9();
      iStack_9c = unaff_EBP + -0x10;
      *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff68;
      FUN_0041160e();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_9c = 0x68a045;
      FUN_00424e82();
      iStack_9c = 0x68a04c;
      FUN_00427af9();
      FUN_004125e6();
      FUN_00412600();
      FUN_00412600();
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0068a16b();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


