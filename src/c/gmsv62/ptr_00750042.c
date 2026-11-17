/* ptr_00750042 - 0x00750042 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 ptr_00750042(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_EBX;
  int unaff_EBP;
  int iStack_5c;
  int iStack_58;
  int *piStack_54;
  undefined4 *puStack_50;
  int *piStack_4c;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  int *piStack_34;
  undefined4 *puStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_8 = 0x750048;
  FUN_00403384();
  uStack_8 = 0x750057;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  uStack_8 = 0x750064;
  FUN_00403191();
  piStack_2c = *(int **)(unaff_EBP + -0x10);
  *(undefined1 *)(unaff_EBP + -4) = 0x22;
  if (piStack_2c == (int *)0x0) {
    uStack_8 = 0x750075;
    FUN_00878dfb();
    piStack_2c = *(int **)(unaff_EBP + -0x10);
  }
  uStack_10 = *(undefined4 *)(unaff_EBP + -0x58);
  uStack_c = *(undefined4 *)(unaff_EBP + -0x54);
  iVar2 = *piStack_2c;
  uStack_8 = *(undefined4 *)(unaff_EBP + -0x50);
  uStack_24 = *(undefined4 *)(unaff_EBP + -0x40);
  uStack_28 = *(undefined4 *)(unaff_EBP + -0x38);
  uStack_20 = *(undefined4 *)(unaff_EBP + -0x68);
  uStack_1c = *(undefined4 *)(unaff_EBP + -100);
  uStack_18 = *(undefined4 *)(unaff_EBP + -0x60);
  *(int **)(unaff_EBP + -0x44) = piStack_2c;
  uStack_14 = *(undefined4 *)(unaff_EBP + -0x5c);
  puStack_30 = (undefined4 *)0x75009f;
  iVar2 = (**(code **)(iVar2 + 0x2c))();
  if (iVar2 < 0) {
    puStack_30 = (undefined4 *)&DAT_00963cc8;
    piStack_34 = *(int **)(unaff_EBP + -0x44);
    uStack_3c = 0x7500b1;
    iStack_38 = iVar2;
    FUN_00878e09();
  }
  puStack_30 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x21;
  piStack_34 = (int *)0x7500be;
  puStack_30 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_30 < 0) {
    piStack_34 = (int *)0x7500c9;
    FUN_00878dfb();
  }
  puStack_30 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_34 = (int *)0x7500d6;
  puStack_30 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_30 < 0) {
    piStack_34 = (int *)0x7500e1;
    FUN_00878dfb();
  }
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  if (0 < *(int *)(unaff_EBP + -0x24)) {
    do {
      puStack_30 = &DAT_00980690;
      piStack_34 = (int *)0x7500fc;
      FUN_00403191();
      *(undefined1 *)(unaff_EBP + -4) = 0x23;
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        piStack_34 = (int *)0x75010c;
        puStack_30 = (undefined4 *)unaff_EBX;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        piStack_34 = (int *)0x750118;
        puStack_30 = (undefined4 *)unaff_EBX;
        FUN_00878dfb();
      }
      piVar1 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x18);
      puStack_30 = (undefined4 *)0x750126;
      iStack_44 = FUN_0040eed0();
      uStack_40 = *(undefined4 *)(unaff_EBP + -0x44);
      uStack_3c = *(undefined4 *)(unaff_EBP + -0x68);
      iStack_44 = *(int *)(unaff_EBP + 0x10) - iStack_44;
      iStack_38 = *(int *)(unaff_EBP + -100);
      piStack_34 = *(int **)(unaff_EBP + -0x60);
      iStack_48 = *(int *)(unaff_EBP + -0x2c) + *(int *)(unaff_EBP + -0x30);
      puStack_30 = *(undefined4 **)(unaff_EBP + -0x5c);
      puStack_50 = (undefined4 *)0x75014d;
      piStack_4c = piVar1;
      iVar2 = (**(code **)(*piVar1 + 0x80))();
      if (iVar2 < 0) {
        puStack_30 = (undefined4 *)&DAT_00963cc8;
        uStack_3c = 0x75015d;
        iStack_38 = iVar2;
        piStack_34 = piVar1;
        FUN_00878e09();
      }
      puStack_30 = (undefined4 *)(unaff_EBP + -0x68);
      *(undefined1 *)(unaff_EBP + -4) = 0x1f;
      piStack_34 = (int *)0x75016a;
      puStack_30 = (undefined4 *)FUN_00402bc3();
      if ((int)puStack_30 < 0) {
        piStack_34 = (int *)0x750175;
        FUN_00878dfb();
      }
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        puStack_30 = (undefined4 *)0x80004003;
        piStack_34 = (int *)0x750185;
        FUN_00878dfb();
      }
      puStack_30 = (undefined4 *)0x75018d;
      iVar2 = FUN_0040e48b();
      *(int *)(unaff_EBP + -0x2c) = *(int *)(unaff_EBP + -0x2c) + iVar2;
      unaff_EBX = 0x80004003;
    } while (*(int *)(unaff_EBP + -0x2c) < *(int *)(unaff_EBP + -0x24));
  }
  puStack_30 = &DAT_00980690;
  piStack_34 = (int *)0x7501ae;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x24;
  if (*(int *)(unaff_EBP + -0x1c) == 0) {
    piStack_34 = (int *)0x7501be;
    puStack_30 = (undefined4 *)unaff_EBX;
    FUN_00878dfb();
  }
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    piStack_34 = (int *)0x7501ca;
    puStack_30 = (undefined4 *)unaff_EBX;
    FUN_00878dfb();
  }
  piVar1 = *(int **)(unaff_EBP + -0x10);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(unaff_EBP + -0x1c);
  puStack_30 = (undefined4 *)0x7501d8;
  iStack_44 = FUN_0040eed0();
  uStack_40 = *(undefined4 *)(unaff_EBP + -0x44);
  uStack_3c = *(undefined4 *)(unaff_EBP + -0x68);
  iStack_38 = *(undefined4 *)(unaff_EBP + -100);
  iStack_44 = *(int *)(unaff_EBP + 0x10) - iStack_44;
  piStack_34 = *(int **)(unaff_EBP + -0x60);
  iStack_48 = 0;
  puStack_30 = *(undefined4 **)(unaff_EBP + -0x5c);
  puStack_50 = (undefined4 *)0x7501f8;
  piStack_4c = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x80))();
  if (iVar2 < 0) {
    puStack_50 = (undefined4 *)&DAT_00963cc8;
    iStack_5c = 0x750208;
    iStack_58 = iVar2;
    piStack_54 = piVar1;
    FUN_00878e09();
  }
  puStack_50 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_54 = (int *)0x750215;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    piStack_54 = (int *)0x750220;
    FUN_00878dfb();
  }
  puStack_50 = &DAT_00980690;
  piStack_54 = (int *)0x75022e;
  FUN_00424aee();
  puStack_50 = (undefined4 *)(unaff_EBP + -0x68);
  piStack_54 = *(int **)(unaff_EBP + -0x14);
  iStack_58 = 0;
  *(undefined1 *)(unaff_EBP + -4) = 0x25;
  iStack_5c = 0x750243;
  FUN_004115d9();
  iStack_5c = 0x75024a;
  iStack_5c = FUN_0040e48b();
  iStack_5c = *(int *)(unaff_EBP + -0x38) - iStack_5c;
  FUN_004115d9();
  FUN_00470739();
  puStack_50 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_54 = (int *)0x75026c;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    piStack_54 = (int *)0x750277;
    FUN_00878dfb();
  }
  puStack_50 = &DAT_00980690;
  piStack_54 = (int *)0x750280;
  FUN_00424aee();
  puStack_50 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  piStack_54 = (int *)0x75028d;
  FUN_00424aee();
  puStack_50 = (undefined4 *)(unaff_EBP + -0x58);
  piStack_54 = (int *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  iStack_58 = 0x7502a1;
  iStack_58 = FUN_00449749();
  *(int **)(unaff_EBP + -0x44) = &iStack_5c;
  FUN_00448a17(*(undefined4 *)(unaff_EBP + 0xc));
  iVar2 = *(int *)(unaff_EBP + 0x10) + -2;
  iVar3 = (*(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + -0x3c)) / 2 +
          *(int *)(unaff_EBP + -0x30);
  *(undefined1 *)(unaff_EBP + -4) = 0x27;
  FUN_004115d9(iVar3,iVar2);
  FUN_00448e3a(iVar3,iVar2);
  puStack_50 = (undefined4 *)(unaff_EBP + -0x68);
  *(undefined1 *)(unaff_EBP + -4) = 0x26;
  piStack_54 = (int *)0x7502e6;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    piStack_54 = (int *)0x7502f1;
    FUN_00878dfb();
  }
  puStack_50 = (undefined4 *)(unaff_EBP + -0x58);
  *(undefined1 *)(unaff_EBP + -4) = 0x1f;
  piStack_54 = (int *)0x7502fe;
  puStack_50 = (undefined4 *)FUN_00402bc3();
  if ((int)puStack_50 < 0) {
    piStack_54 = (int *)0x750309;
    FUN_00878dfb();
  }
  puStack_50 = (undefined4 *)(*(int *)(unaff_EBP + -0x24) / 2 + *(int *)(unaff_EBP + -0x30));
  piStack_54 = (int *)0x75031d;
  FUN_004115d9();
  piStack_54 = (int *)0x750324;
  FUN_006e3d24();
  puStack_50 = (undefined4 *)0xfffffffe;
  piStack_54 = (int *)0x75032e;
  FUN_004115d9();
  piStack_54 = (int *)0x750335;
  FUN_006e3d45();
  puStack_50 = (undefined4 *)(unaff_EBP + -0x10);
  piStack_54 = (int *)0x750341;
  FUN_0046fc23();
  *(undefined4 *)(unaff_EBP + -0x48) = 1;
  puStack_50 = (undefined4 *)0x750350;
  FUN_004125e6();
  puStack_50 = (undefined4 *)0x750358;
  FUN_004497b5();
  puStack_50 = (undefined4 *)0x750360;
  FUN_004125e6();
  puStack_50 = (undefined4 *)0x750368;
  FUN_004125e6();
  puStack_50 = (undefined4 *)0x750370;
  FUN_004125e6();
  puStack_50 = (undefined4 *)0x750378;
  FUN_004027eb();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  puStack_50 = (undefined4 *)0x750384;
  FUN_00414ebb();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(undefined4 *)(unaff_EBP + 8);
}


