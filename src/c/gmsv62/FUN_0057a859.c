/* FUN_0057a859 - 0x0057a859 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0057a859(void)

{
  int iVar1;
  undefined *puVar2;
  int extraout_ECX;
  undefined *extraout_ECX_00;
  int unaff_EBP;
  undefined *puStack_b0;
  int *piStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined4 *puStack_88;
  
  FUN_00879bb8();
  if (*(int *)(extraout_ECX + 0xd0) == 0) {
    *(undefined4 *)(extraout_ECX + 0xcc) = *(undefined4 *)(unaff_EBP + 8);
    *(int *)(extraout_ECX + 0xd0) = 1;
    if (*(int *)(extraout_ECX + 0x14) != 0) {
      puStack_88 = (undefined4 *)(unaff_EBP + 8);
      iStack_8c = 0x57a89e;
      FUN_004489f5();
      puStack_88 = (undefined4 *)0x3;
      iStack_8c = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      iStack_90 = 0x57a8ae;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int *)(unaff_EBP + 8) == 0) {
        puStack_88 = (undefined4 *)0x80004003;
        iStack_8c = 0x57a8c1;
        FUN_00878dfb();
      }
      puStack_88 = (undefined4 *)(unaff_EBP + -0x24);
      iStack_8c = unaff_EBP + -0x10;
      iStack_90 = 0x57a8d1;
      FUN_00425067();
      puStack_88 = (undefined4 *)(unaff_EBP + -0x24);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_8c = 0x57a8de;
      puStack_88 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_88 < 0) {
        iStack_8c = 0x57a8e9;
        FUN_00878dfb();
      }
      puStack_88 = (undefined4 *)0x3;
      iStack_8c = 0xfffffffe;
      iStack_90 = 0x57a8f4;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + 8) == 0) {
        puStack_88 = (undefined4 *)0x80004003;
        iStack_8c = 0x57a907;
        FUN_00878dfb();
      }
      puStack_88 = (undefined4 *)(unaff_EBP + -0x34);
      iStack_8c = unaff_EBP + -0x14;
      iStack_90 = 0x57a917;
      FUN_0041141a();
      puStack_88 = (undefined4 *)0x57a91f;
      FUN_004125e6();
      puStack_88 = (undefined4 *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_8c = 0x57a92c;
      puStack_88 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_88 < 0) {
        iStack_8c = 0x57a937;
        FUN_00878dfb();
      }
      puStack_88 = &DAT_00980690;
      iStack_8c = 0x57a945;
      FUN_00403191();
      puStack_88 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_8c = 0x57a952;
      FUN_00403191();
      iStack_8c = *(undefined4 *)(extraout_ECX + 0x7c);
      puStack_88 = (undefined4 *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_90 = 0x57a963;
      FUN_004031b7();
      iStack_8c = *(undefined4 *)(extraout_ECX + 0x78);
      puStack_88 = (undefined4 *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_90 = 0x57a974;
      FUN_004031b7();
      iStack_8c = *(undefined4 *)(extraout_ECX + 0x88);
      puStack_88 = (undefined4 *)0x3;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_90 = 0x57a988;
      FUN_004031b7();
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (*(int *)(unaff_EBP + 8) == 0) {
        puStack_88 = (undefined4 *)0x80004003;
        iStack_8c = 0x57a99c;
        FUN_00878dfb();
      }
      puStack_88 = (undefined4 *)(unaff_EBP + -0x74);
      iStack_8c = unaff_EBP + -100;
      iStack_90 = unaff_EBP + -0x54;
      iStack_94 = unaff_EBP + -0x44;
      iStack_98 = unaff_EBP + -0x34;
      uStack_9c = *(undefined4 *)(unaff_EBP + -0x10);
      iStack_a0 = unaff_EBP + -0x84;
      uStack_a4 = 0x57a9c2;
      FUN_004250ac();
      puStack_88 = (undefined4 *)(unaff_EBP + -0x84);
      iStack_8c = 0x57a9ce;
      puStack_88 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_88 < 0) {
        iStack_8c = 0x57a9d9;
        FUN_00878dfb();
      }
      puStack_88 = (undefined4 *)(unaff_EBP + -0x34);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStack_8c = 0x57a9e6;
      puStack_88 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_88 < 0) {
        iStack_8c = 0x57a9f1;
        FUN_00878dfb();
      }
      puStack_88 = (undefined4 *)(unaff_EBP + -0x44);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      iStack_8c = 0x57a9fe;
      puStack_88 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_88 < 0) {
        iStack_8c = 0x57aa09;
        FUN_00878dfb();
      }
      puStack_88 = (undefined4 *)(unaff_EBP + -0x54);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      iStack_8c = 0x57aa16;
      puStack_88 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_88 < 0) {
        iStack_8c = 0x57aa21;
        FUN_00878dfb();
      }
      puStack_88 = (undefined4 *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iStack_8c = 0x57aa2e;
      puStack_88 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_88 < 0) {
        iStack_8c = 0x57aa39;
        FUN_00878dfb();
      }
      puStack_88 = (undefined4 *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      iStack_8c = 0x57aa46;
      puStack_88 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_88 < 0) {
        iStack_8c = 0x57aa51;
        FUN_00878dfb();
      }
      puStack_88 = &DAT_00980690;
      iStack_8c = 0x57aa5a;
      FUN_00403191();
      puStack_88 = &DAT_00980690;
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iStack_8c = 0x57aa67;
      FUN_00403191();
      piStack_ac = *(int **)(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 0xb;
      if (piStack_ac == (int *)0x0) {
        puStack_88 = (undefined4 *)0x80004003;
        iStack_8c = 0x57aa7c;
        FUN_00878dfb();
        piStack_ac = *(int **)(unaff_EBP + 8);
      }
      iStack_94 = *(undefined4 *)(unaff_EBP + -100);
      iStack_90 = *(undefined4 *)(unaff_EBP + -0x60);
      iVar1 = *piStack_ac;
      iStack_8c = *(undefined4 *)(unaff_EBP + -0x5c);
      puStack_88 = *(undefined4 **)(unaff_EBP + -0x58);
      uStack_a4 = *(undefined4 *)(unaff_EBP + -0x74);
      iStack_a0 = *(undefined4 *)(unaff_EBP + -0x70);
      uStack_9c = *(undefined4 *)(unaff_EBP + -0x6c);
      uStack_a8 = 0;
      *(int **)(unaff_EBP + -0x14) = piStack_ac;
      iStack_98 = *(undefined4 *)(unaff_EBP + -0x68);
      puStack_b0 = (undefined *)0x57aaa5;
      iVar1 = (**(code **)(iVar1 + 0x110))();
      if (iVar1 < 0) {
        puStack_b0 = &DAT_00963df8;
        FUN_00878e09(iVar1,*(undefined4 *)(unaff_EBP + -0x14));
      }
      puStack_b0 = (undefined *)(unaff_EBP + -0x74);
      *(undefined1 *)(unaff_EBP + -4) = 10;
      puStack_b0 = (undefined *)FUN_00402bc3();
      if ((int)puStack_b0 < 0) {
        FUN_00878dfb();
      }
      puStack_b0 = (undefined *)(unaff_EBP + -100);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      puVar2 = (undefined *)FUN_00402bc3();
      if ((int)puVar2 < 0) {
        puStack_b0 = puVar2;
        FUN_00878dfb();
        puStack_b0 = extraout_ECX_00;
      }
      *(undefined ***)(unaff_EBP + -0x14) = &puStack_b0;
      FUN_0041160e(unaff_EBP + 8);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00424e82();
      FUN_00427af9();
      puStack_b0 = (undefined *)0x57ab0d;
      FUN_00815de9();
      puStack_b0 = (undefined *)0x57ab15;
      FUN_004125e6();
      puStack_b0 = (undefined *)0x57ab1d;
      FUN_00412600();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


