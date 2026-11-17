/* ptr_00494e45 - 0x00494e45 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00494e45(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  VARIANTARG *in_EAX;
  int iVar5;
  int *unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int iStack_1c;
  
code_r0x00494e45:
  VariantInit(in_EAX);
  iVar5 = FUN_00402e32();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  FUN_00403191();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  FUN_00449749();
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffff0;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  iStack_1c = 0x494ec8;
  FUN_004115d9();
  iStack_1c = 0x494ecf;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x10;
  if (*(int **)(unaff_EBP + -0x38) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x38) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(int **)(unaff_EBP + -0x20) = unaff_EBX;
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  FUN_007d3546();
  iVar5 = *(int *)(*(int *)(unaff_EDI + 4 + **(int **)(unaff_EBP + -0x30)) + 0xc);
  if ((iVar5 < 80000000) || (89999999 < iVar5)) {
    FUN_00679d22();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 2;
    *(undefined4 *)(unaff_EBP + -4) = 0x15;
  }
  else {
    FUN_00679d22();
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 1;
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
  }
  FUN_0045efbb();
  *(undefined4 *)(unaff_EBP + -4) = 0x14;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00414ebb();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0x13;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00414ebb();
  }
  VariantInit((VARIANTARG *)(unaff_EBP + -0x7c));
  iVar5 = FUN_00402e32();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  VariantInit((VARIANTARG *)(unaff_EBP + -0x5c));
  iVar5 = FUN_00402e32();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  FUN_007d4a9a();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  FUN_00449749();
  FUN_00449713();
  *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffff0;
  FUN_00448a17();
  *(undefined1 *)(unaff_EBP + -4) = 0x18;
  iStack_1c = 0x495068;
  FUN_004115d9();
  iStack_1c = 0x49506f;
  FUN_00448e3a();
  *(undefined1 *)(unaff_EBP + -4) = 0x17;
  if (*(int **)(unaff_EBP + -0x34) != unaff_EBX) {
    (**(code **)(**(int **)(unaff_EBP + -0x34) + 8))();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x16;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0x13;
  iVar5 = FUN_00402bc3();
  if (iVar5 < (int)unaff_EBX) {
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 10;
  FUN_00414ebb();
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00414ebb();
  do {
    iVar5 = *(int *)(unaff_EBP + -0x2c);
    do {
      while( true ) {
        *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 1;
        if (4 < *(int *)(unaff_EBP + -0x14)) {
          *(char *)(unaff_EBP + -4) = (char)unaff_EBX;
          if (*(int **)(unaff_EBP + -0x28) != unaff_EBX) {
            (**(code **)(**(int **)(unaff_EBP + -0x28) + 8))();
          }
          *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
          if (*(int **)(unaff_EBP + 8) != unaff_EBX) {
            (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
          }
          ExceptionList = *(void **)(unaff_EBP + -0xc);
          return;
        }
        if ((*(int *)(unaff_EBP + -0x14) == 4) &&
           (*(int **)(*(int *)(iVar5 + 0x78) + 0x4f4) != unaff_EBX)) break;
        iVar1 = *(int *)(iVar5 + 100 + *(int *)(unaff_EBP + -0x14) * 4);
        if ((int)unaff_EBX <= iVar1) {
          unaff_EDI = iVar1 << 3;
          uVar4 = FUN_0045e2eb();
          *(undefined4 *)(unaff_EBP + -0x18) = uVar4;
          *(int **)(unaff_EBP + -0x1c) = unaff_EBX;
          *(undefined1 *)(unaff_EBP + -4) = 10;
          iVar5 = FUN_0045e2eb();
          if (iVar5 / 100000 == 0x5b) {
            iStack_1c = unaff_EBP + 8;
            *(undefined1 **)(unaff_EBP + -0x24) = &stack0xffffffe8;
            piStack_20 = (int *)0x494d8f;
            FUN_0046fc23();
            *(undefined1 *)(unaff_EBP + -4) = 10;
            iStack_1c = 0x494d98;
            FUN_0048b97b();
            iStack_1c = 0x494d9f;
            FUN_00556c6a();
            FUN_00556acf();
            *(undefined1 *)(unaff_EBP + -4) = 0xc;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 10;
          }
          else {
            iStack_1c = *(int *)(unaff_EBP + -0x14) * 0x45 + 0x22;
            piStack_20 = (int *)0x34;
            uStack_24 = *(undefined4 *)(unaff_EBP + -0x18);
            uStack_28 = 100000;
            *(undefined4 **)(unaff_EBP + -0x24) = &uStack_28;
            FUN_0046fc23(unaff_EBP + 8);
            *(undefined1 *)(unaff_EBP + -4) = 10;
            FUN_0048b97b();
            FUN_005558b0();
            FUN_0045a1d8();
            *(undefined1 *)(unaff_EBP + -4) = 0xe;
            FUN_00414f8b();
            *(undefined1 *)(unaff_EBP + -4) = 10;
          }
          FUN_00414ebb();
          *(undefined1 **)(unaff_EBP + -0x24) = &stack0xfffffff8;
          FUN_007d4a9a();
          FUN_007d3a22();
          in_EAX = (VARIANTARG *)(unaff_EBP + -0x6c);
          goto code_r0x00494e45;
        }
      }
      cVar2 = FUN_004115ef();
    } while (cVar2 != '\0');
    FUN_004031b7();
    piVar3 = *(int **)(unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    if (piVar3 == unaff_EBX) {
      FUN_00878dfb();
      piVar3 = *(int **)(unaff_EBP + 8);
    }
    iVar5 = *piVar3;
    iStack_1c = 6;
    *(int **)(unaff_EBP + -0x18) = piVar3;
    uStack_24 = 0x494cef;
    piStack_20 = piVar3;
    iVar5 = (**(code **)(iVar5 + 0x80))();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 6;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
  } while( true );
}


