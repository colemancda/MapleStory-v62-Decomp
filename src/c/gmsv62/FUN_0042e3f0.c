/* FUN_0042e3f0 - 0x0042e3f0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * FUN_0042e3f0(void)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBP;
  undefined4 uStack_68;
  int iStack_64;
  undefined1 auStack_60 [4];
  undefined4 uStack_5c;
  int iStack_58;
  int iStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int *piStack_48;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  piStack_48 = &DAT_00980690;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  iStack_4c = 0x42e417;
  FUN_00403191();
  piStack_48 = &DAT_00980690;
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iStack_4c = 0x42e424;
  FUN_00403191();
  piStack_48 = (int *)(unaff_EBP + -0x3c);
  iStack_4c = unaff_EBP + -0x2c;
  *(undefined4 **)(unaff_EBP + -0x1c) = &uStack_50;
  iStack_54 = *(int *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_58 = 0x42e43e;
  FUN_004033a1();
  iStack_54 = unaff_EBP + -0x4c;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  iStack_58 = 0x42e44b;
  FUN_00405a1d();
  iStack_58 = 0x42e452;
  FUN_00402660();
  iStack_58 = 0x42e459;
  piStack_48 = (int *)FUN_00404a02();
  iStack_4c = unaff_EBP + -0x18;
  *(undefined1 *)(unaff_EBP + -4) = 6;
  uStack_50 = 0x42e467;
  piStack_48 = (int *)FUN_00412348();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  iStack_4c = 0x42e476;
  FUN_00417232();
  piStack_48 = *(int **)(unaff_EBP + -0x18);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  if (piStack_48 != (int *)0x0) {
    iStack_4c = 0x42e487;
    (**(code **)(*piStack_48 + 8))();
  }
  piStack_48 = (int *)(unaff_EBP + -0x4c);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  iStack_4c = 0x42e494;
  piStack_48 = (int *)FUN_00402bc3();
  if ((int)piStack_48 < 0) {
    iStack_4c = 0x42e49f;
    FUN_00878dfb();
  }
  piStack_48 = (int *)(unaff_EBP + -0x2c);
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iStack_4c = 0x42e4ac;
  piStack_48 = (int *)FUN_00402bc3();
  if ((int)piStack_48 < 0) {
    iStack_4c = 0x42e4b7;
    FUN_00878dfb();
  }
  piStack_48 = (int *)(unaff_EBP + -0x3c);
  *(undefined1 *)(unaff_EBP + -4) = 9;
  iStack_4c = 0x42e4c4;
  piStack_48 = (int *)FUN_00402bc3();
  if ((int)piStack_48 < 0) {
    iStack_4c = 0x42e4cf;
    FUN_00878dfb();
  }
  piStack_48 = (int *)0x0;
  if (*(int *)(unaff_EBP + -0x10) != 0) {
    piStack_48 = (int *)0x42e4df;
    iVar1 = FUN_0040cf4d();
    if (iVar1 != 0) {
      piStack_48 = *(int **)(unaff_EBP + 0x2c);
      iStack_58 = unaff_EBP + 0x20;
      iStack_4c = *(undefined4 *)(unaff_EBP + 0x28);
      uStack_50 = *(undefined4 *)(unaff_EBP + 0x24);
      *(int **)(unaff_EBP + 0xc) = &iStack_54;
      uStack_5c = 0x42e4ff;
      FUN_0041160e();
      iStack_58 = *(undefined4 *)(unaff_EBP + 0x1c);
      iStack_64 = unaff_EBP + 0x14;
      uStack_5c = *(undefined4 *)(unaff_EBP + 0x18);
      *(undefined1 **)(unaff_EBP + 0xc) = auStack_60;
      uStack_68 = 0x42e514;
      FUN_00433bdf();
      iStack_64 = *(undefined4 *)(unaff_EBP + 0x10);
      *(undefined4 **)(unaff_EBP + 0xc) = &uStack_68;
      FUN_00424dbc(unaff_EBP + -0x10);
      FUN_0042e5bf(*(undefined4 *)(unaff_EBP + 8));
      piStack_48 = *(int **)(unaff_EBP + -0x10);
      *(undefined4 *)(unaff_EBP + -0x14) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (piStack_48 != (int *)0x0) {
        iStack_4c = 0x42e549;
        (**(code **)(*piStack_48 + 8))();
      }
      piStack_48 = *(int **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piStack_48 != (int *)0x0) {
        iStack_4c = 0x42e55a;
        (**(code **)(*piStack_48 + 8))();
      }
      piStack_48 = *(int **)(unaff_EBP + 0x20);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piStack_48 != (int *)0x0) {
        iStack_4c = 0x42e56b;
        (**(code **)(*piStack_48 + 8))();
      }
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      goto LAB_0042e5b2;
    }
    piStack_48 = *(int **)(unaff_EBP + -0x10);
  }
  puVar2 = *(undefined4 **)(unaff_EBP + 8);
  *puVar2 = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (piStack_48 != (int *)0x0) {
    iStack_4c = 0x42e58e;
    (**(code **)(*piStack_48 + 8))();
  }
  piStack_48 = *(int **)(unaff_EBP + 0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piStack_48 != (int *)0x0) {
    iStack_4c = 0x42e59f;
    (**(code **)(*piStack_48 + 8))();
  }
  piStack_48 = *(int **)(unaff_EBP + 0x20);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piStack_48 != (int *)0x0) {
    iStack_4c = 0x42e5b0;
    (**(code **)(*piStack_48 + 8))();
  }
LAB_0042e5b2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar2;
}


