/* ptr_006ae045 - 0x006ae045 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall ptr_006ae045(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int extraout_ECX;
  int *unaff_EBX;
  int unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  int iStack_18;
  
  *unaff_EDI = *unaff_ESI;
  *(undefined4 *)(unaff_EBP + 0xc) = param_1;
  unaff_EDI[1] = unaff_ESI[1];
  iVar1 = (**(code **)(param_2 + 0x80))();
  if (iVar1 < (int)unaff_EBX) {
    iStack_18 = iVar1;
    FUN_00878e09();
  }
  iVar1 = unaff_EBP + -0x3c;
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar2 = FUN_00402bc3();
  if (iVar2 < (int)unaff_EBX) {
    FUN_00878dfb();
    iVar1 = extraout_ECX;
  }
  *(int **)(unaff_EBP + 8) = &iStack_18;
  iStack_18 = iVar1;
  FUN_00679e4e();
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  FUN_0040263d();
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x23;
  iStack_18 = 0x6ae0bc;
  uVar3 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + 0xc) = uVar3;
  iVar1 = FUN_0041a581();
  if ((iVar1 < (int)unaff_EBX) && (iVar1 != -0x7fffbffe)) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
  *(undefined4 *)(unaff_EBP + 0xc) = 6;
  if (6 < iVar1 + -6) {
    do {
      iStack_18 = 0x6ae119;
      FUN_004031b7();
      piVar4 = *(int **)(unaff_EBP + -0x10);
      *(undefined1 *)(unaff_EBP + -4) = 0x24;
      if (piVar4 == unaff_EBX) {
        FUN_00878dfb();
        piVar4 = *(int **)(unaff_EBP + -0x10);
      }
      iVar1 = *piVar4;
      iStack_18 = *(int *)(unaff_EBP + -0x38);
      *(int **)(unaff_EBP + 8) = piVar4;
      iVar1 = (**(code **)(iVar1 + 0x80))();
      if (iVar1 < (int)unaff_EBX) {
        iStack_18 = iVar1;
        FUN_00878e09();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0x1b;
      iVar1 = FUN_00402bc3();
      if (iVar1 < (int)unaff_EBX) {
        FUN_00878dfb();
      }
      iVar1 = *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c);
      *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
    } while (*(int *)(unaff_EBP + 0xc) < iVar1 + -6);
  }
  piVar4 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x578);
  *(int **)(unaff_EBP + 0xc) = piVar4;
  if ((piVar4 != unaff_EBX) &&
     (piVar4 = *(int **)(*(int *)(unaff_EBP + -0x14) + 0x57c), *(int **)(unaff_EBP + 8) = piVar4,
     piVar4 != unaff_EBX)) {
    uVar3 = __ftol();
    *(undefined4 *)(unaff_EBP + -0x1c) = uVar3;
    *(int **)(unaff_EBP + -0x18) = unaff_EBX;
    *(int **)(unaff_EBP + 8) = unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    iStack_18 = 0x6ae1ea;
    FUN_00679d22();
    iStack_18 = unaff_EBP + -0x18;
    *(undefined1 *)(unaff_EBP + -4) = 0x27;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
      FUN_00434e38();
    }
    iStack_18 = 0x6ae224;
    FUN_00679d22();
    iStack_18 = unaff_EBP + 8;
    *(undefined1 *)(unaff_EBP + -4) = 0x28;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
      FUN_00434e38();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x29;
    FUN_00403191();
    iStack_18 = -1;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    uVar3 = FUN_00449713(&stack0xffffffdc);
    uVar3 = FUN_00456ad5(uVar3);
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffc8;
    FUN_004033a1(uVar3);
    iVar1 = unaff_EBP + -0xe0;
    *(undefined1 *)(unaff_EBP + -4) = 0x2a;
    FUN_00405a1d(iVar1);
    FUN_00402660();
    FUN_00404a02(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 0x2c;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x70) = piVar4;
    *(int **)(unaff_EBP + -0x28) = unaff_EBX;
    if (((piVar4 != unaff_EBX) && (iVar1 = FUN_0041a581(), iVar1 < (int)unaff_EBX)) &&
       (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x30;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2f;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x31;
    FUN_00403191();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_18 = unaff_EBP + -0xb0;
    FUN_00449713();
    FUN_00456ad5();
    *(undefined1 **)(unaff_EBP + 0xc) = &stack0xffffffe0;
    FUN_004033a1();
    *(undefined1 *)(unaff_EBP + -4) = 0x32;
    FUN_00405a1d();
    FUN_00402660();
    FUN_00404a02();
    *(undefined1 *)(unaff_EBP + -4) = 0x34;
    iStack_18 = 0x6ae3df;
    piVar4 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -0x6c) = piVar4;
    *(int **)(unaff_EBP + -0x50) = unaff_EBX;
    if (((piVar4 != unaff_EBX) && (iVar1 = FUN_0041a581(), iVar1 < (int)unaff_EBX)) &&
       (iVar1 != -0x7fffbffe)) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x38;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x37;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x36;
    iVar1 = FUN_00402bc3();
    if (iVar1 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    if ((int)unaff_EBX < *(int *)(unaff_EBP + -0x1c)) {
      *(undefined4 *)(unaff_EBP + 0xc) = 2;
      do {
        if ((*(int *)(unaff_EBP + 0xc) == 2) ||
           (*(int *)(unaff_EBP + 0xc) == *(int *)(*(int *)(unaff_EBP + -0x14) + 0x1c) + -3)) {
          iStack_18 = 0x6ae4ec;
          FUN_004031b7();
          piVar4 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x39;
          if (piVar4 == unaff_EBX) {
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          iStack_18 = *(int *)(unaff_EBP + -0x48);
          *(int **)(unaff_EBP + -0x24) = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x80))();
          if (iVar1 < (int)unaff_EBX) {
            iStack_18 = iVar1;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
        }
        else {
          iStack_18 = 0x6ae48a;
          FUN_004031b7();
          piVar4 = *(int **)(unaff_EBP + -0x10);
          *(undefined1 *)(unaff_EBP + -4) = 0x3a;
          if (piVar4 == unaff_EBX) {
            FUN_00878dfb();
            piVar4 = *(int **)(unaff_EBP + -0x10);
          }
          iVar1 = *piVar4;
          iStack_18 = *(int *)(unaff_EBP + -0x7c);
          *(int **)(unaff_EBP + -0x24) = piVar4;
          iVar1 = (**(code **)(iVar1 + 0x80))();
          if (iVar1 < (int)unaff_EBX) {
            iStack_18 = iVar1;
            FUN_00878e09();
          }
          *(undefined1 *)(unaff_EBP + -4) = 0x36;
        }
        iVar1 = FUN_00402bc3();
        if (iVar1 < (int)unaff_EBX) {
          FUN_00878dfb();
        }
        *(int *)(unaff_EBP + 0xc) = *(int *)(unaff_EBP + 0xc) + 1;
      } while (*(int *)(unaff_EBP + 0xc) + -2 < *(int *)(unaff_EBP + -0x1c));
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x2e;
    if (*(int **)(unaff_EBP + -0x50) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x50) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x26;
    if (*(int **)(unaff_EBP + -0x28) != unaff_EBX) {
      (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0x25;
    FUN_00414ebb();
    *(undefined1 *)(unaff_EBP + -4) = 0x1b;
    FUN_00414ebb();
  }
  iStack_18 = 0x6ae5b2;
  FUN_004031b7();
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  puVar5 = (undefined4 *)FUN_004489f5();
  piVar4 = (int *)*puVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x3c;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
  }
  iStack_18 = 0x6ae5e5;
  FUN_0041141a();
  if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3b;
  if (*(int **)(unaff_EBP + 8) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x3c));
  iStack_18 = 0x6ae631;
  iVar1 = FUN_00402e32();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x60));
  iStack_18 = 0x6ae651;
  iVar1 = FUN_00402e32();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  puVar5 = (undefined4 *)FUN_004489f5();
  piVar4 = (int *)*puVar5;
  *(undefined1 *)(unaff_EBP + -4) = 0x42;
  if (piVar4 == unaff_EBX) {
    FUN_00878dfb();
  }
  iStack_18 = unaff_EBP + -0xb0;
  FUN_004250ac();
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x41;
  if (*(int **)(unaff_EBP + 0xc) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x40;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3f;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3e;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x3d;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1b;
  iVar1 = FUN_00402bc3();
  if (iVar1 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x1a;
  if (*(int **)(unaff_EBP + -0x68) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x68) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 9;
  if (*(int **)(unaff_EBP + -0x2c) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x2c) + 8))();
  }
  *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
  if (*(int **)(unaff_EBP + -0x20) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x20) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


