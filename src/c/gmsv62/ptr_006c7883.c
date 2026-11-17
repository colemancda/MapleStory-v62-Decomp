/* ptr_006c7883 - 0x006c7883 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_006c7883(int *param_1,int *param_2,int *param_3,int *param_4,IBinding *param_5)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int in_EAX;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  char cVar9;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int iStack_14;
  int *piStack_10;
  int iStack_c;
  
code_r0x006c7883:
  *(int *)(unaff_EBP + -0x38) = in_EAX;
  iVar5 = FUN_0040eea9();
  iStack_14 = *(int *)(unaff_EBP + -0x18);
  piStack_10 = *(int **)(unaff_EBP + -0xc4);
  iStack_c = *(undefined4 *)(unaff_EBP + -0xc0);
  piVar6 = (int *)(**(code **)(*unaff_ESI + 0x80))
                            (*(undefined4 *)(unaff_EBP + -0x2c),*(int *)(unaff_EBP + -0x1c) - iVar5,
                             *(undefined4 *)(unaff_EBP + -0x38));
  if ((int)piVar6 < (int)unaff_EBX) {
    param_5 = (IBinding *)&DAT_00963cc8;
    param_4 = *(int **)(unaff_EBP + -0x2c);
    param_2 = (int *)0x6c78c5;
    param_3 = piVar6;
    FUN_00878e09();
  }
  param_5 = (IBinding *)(unaff_EBP + -0xc4);
  *(undefined1 *)(unaff_EBP + -4) = 7;
  param_4 = (int *)0x6c78d5;
  param_5 = (IBinding *)FUN_00402bc3();
  if ((int)param_5 < (int)unaff_EBX) {
    param_4 = (int *)0x6c78e0;
    FUN_00878dfb();
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (*(int **)(unaff_EBP + -0x28) != unaff_EBX) {
    param_5 = (IBinding *)(*(int **)(unaff_EBP + -0x28) + -3);
    param_4 = (int *)0x6c78f8;
    FUN_00434e38();
  }
LAB_006c7b12:
  cVar9 = (char)unaff_EBX;
  if (*(int *)(unaff_EBP + -0x3c) == 0x1d) {
    iVar5 = *(int *)(unaff_EBP + -0x30);
    param_5 = (IBinding *)(unaff_EBP + -0x24);
    param_4 = (int *)(unaff_EBP + -0x1c);
    param_3 = (int *)0x59;
    param_2 = (int *)0x6c7cbe;
    FUN_006c831e();
    cVar2 = *(char *)(iVar5 + 0x6d4);
    if ((cVar2 != cVar9) &&
       ((((cVar2 == '\x02' || (cVar2 == '\x03')) || (cVar2 == '\a')) &&
        ((*(int **)(unaff_EBP + -0x1c) != unaff_EBX || (*(int **)(unaff_EBP + -0x24) != unaff_EBX)))
        ))) {
      iStack_c = *(undefined4 *)(iVar5 + 0x6d5);
      piVar6 = *(int **)(iVar5 + 0x6dc);
      piStack_10 = *(int **)(unaff_EBP + -0x24) + 8;
      iStack_14 = unaff_EBP + -0x14;
      *(int ***)(unaff_EBP + -0x20) = &piStack_10;
      param_1 = unaff_EBX;
      param_2 = unaff_EBX;
      param_3 = unaff_EBX;
      FUN_0046fc23();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_14 = 0x6c7d1e;
      FUN_0048b97b();
      iStack_14 = 0x6c7d25;
      FUN_005558b0();
      if (*(char *)(iVar5 + 0x6d4) == '\x02') {
        param_3 = (int *)(iVar5 + 0xb7c);
        *(undefined1 **)(unaff_EBP + -0x20) = &stack0x00000010;
        param_2 = (int *)0x6c7d41;
        FUN_00424dbc();
        param_2 = (int *)(*(int *)(unaff_EBP + -0x24) + 0x14);
        param_1 = *(int **)(unaff_EBP + -0x1c);
        *(BADSPACEBASE **)(unaff_EBP + -0x20) = register0x00000010;
        param_3 = piVar6;
        FUN_0046fc23();
        FUN_007d3201();
      }
      if ((*(char *)(iVar5 + 0x6d4) == '\x03') && ((int)piVar6 <= (int)unaff_EBX)) {
        if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
          param_5 = (IBinding *)0x80004003;
          param_4 = (int *)0x6c7d87;
          FUN_00878dfb();
        }
        piVar6 = *(int **)(unaff_EBP + -0x14);
        param_5 = (IBinding *)0xa0808080;
        param_4 = (int *)0x20;
        param_3 = (int *)0x20;
        param_2 = *(int **)(unaff_EBP + -0x24);
        param_1 = *(int **)(unaff_EBP + -0x1c);
        piVar8 = (int *)(**(code **)(*piVar6 + 0x8c))();
        if ((int)piVar8 < (int)unaff_EBX) {
          param_5 = (IBinding *)&DAT_00963cc8;
          param_2 = (int *)0x6c7db6;
          param_3 = piVar8;
          param_4 = piVar6;
          FUN_00878e09();
        }
      }
      goto LAB_006c7e72;
    }
    param_5 = (IBinding *)0x3;
    param_4 = (int *)0xff;
    param_3 = (int *)0x6c7dcd;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x14;
    if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x6c7de1;
      FUN_00878dfb();
      if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x6c7dec;
        FUN_00878dfb();
      }
    }
    if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x6c7dfa;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + -0x18) = piVar6;
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
    param_5 = (IBinding *)0x6c7e0b;
    iVar5 = FUN_0040eed0();
    *(int *)(unaff_EBP + -0x34) = (*(int *)(unaff_EBP + -0x24) - iVar5) + 0x20;
    param_5 = (IBinding *)0x6c7e1f;
    FUN_0040eea9();
    param_1 = *(int **)(unaff_EBP + -0x20);
    param_2 = *(int **)(unaff_EBP + -0xa4);
    param_3 = *(int **)(unaff_EBP + -0xa0);
    param_4 = *(int **)(unaff_EBP + -0x9c);
    param_5 = *(IBinding **)(unaff_EBP + -0x98);
    iStack_c = 0x6c7e45;
    piVar6 = (int *)(**(code **)(*piVar6 + 0x80))();
    if ((int)piVar6 < (int)unaff_EBX) {
      param_5 = (IBinding *)&DAT_00963cc8;
      param_4 = *(int **)(unaff_EBP + -0x18);
      param_2 = (int *)0x6c7e57;
      param_3 = piVar6;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    param_5 = (IBinding *)(unaff_EBP + -0xa4);
  }
  else if (*(int *)(unaff_EBP + -0x3c) == 0x2a) {
    param_5 = (IBinding *)(unaff_EBP + -0x24);
    param_4 = (int *)(unaff_EBP + -0x1c);
    param_3 = (int *)0x36;
    param_2 = (int *)0x6c7bff;
    FUN_006c831e();
    param_5 = (IBinding *)0x3;
    param_4 = (int *)0xff;
    param_3 = (int *)0x6c7c11;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x15;
    if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x6c7c25;
      FUN_00878dfb();
      if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x6c7c30;
        FUN_00878dfb();
      }
    }
    if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x6c7c3e;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + -0x18) = piVar6;
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
    param_5 = (IBinding *)0x6c7c4f;
    iVar5 = FUN_0040eed0();
    *(int *)(unaff_EBP + -0x34) = (*(int *)(unaff_EBP + -0x24) - iVar5) + 0x20;
    param_5 = (IBinding *)0x6c7c63;
    FUN_0040eea9();
    param_1 = *(int **)(unaff_EBP + -0x20);
    param_2 = *(int **)(unaff_EBP + -0x94);
    param_3 = *(int **)(unaff_EBP + -0x90);
    param_4 = *(int **)(unaff_EBP + -0x8c);
    param_5 = *(IBinding **)(unaff_EBP + -0x88);
    iStack_c = 0x6c7c89;
    piVar6 = (int *)(**(code **)(*piVar6 + 0x80))();
    if ((int)piVar6 < (int)unaff_EBX) {
      param_5 = (IBinding *)&DAT_00963cc8;
      param_4 = *(int **)(unaff_EBP + -0x18);
      param_2 = (int *)0x6c7c9b;
      param_3 = piVar6;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    param_5 = (IBinding *)(unaff_EBP + -0x94);
  }
  else {
    if (*(int *)(unaff_EBP + -0x3c) != 0x38) goto LAB_006c7e72;
    param_5 = (IBinding *)(unaff_EBP + -0x24);
    param_4 = (int *)(unaff_EBP + -0x1c);
    param_3 = (int *)0x5a;
    param_2 = (int *)0x6c7b42;
    FUN_006c831e();
    param_5 = (IBinding *)0x3;
    param_4 = (int *)0xff;
    param_3 = (int *)0x6c7b54;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x16;
    if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x6c7b68;
      FUN_00878dfb();
      if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x6c7b73;
        FUN_00878dfb();
      }
    }
    if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x6c7b81;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + -0x18) = piVar6;
    *(undefined4 *)(unaff_EBP + -0x20) = *(undefined4 *)(unaff_EBP + -0x10);
    param_5 = (IBinding *)0x6c7b92;
    iVar5 = FUN_0040eed0();
    *(int *)(unaff_EBP + -0x34) = (*(int *)(unaff_EBP + -0x24) - iVar5) + 0x20;
    param_5 = (IBinding *)0x6c7ba6;
    FUN_0040eea9();
    param_1 = *(int **)(unaff_EBP + -0x20);
    param_2 = *(int **)(unaff_EBP + -0x84);
    param_3 = *(int **)(unaff_EBP + -0x80);
    param_4 = *(int **)(unaff_EBP + -0x7c);
    param_5 = *(IBinding **)(unaff_EBP + -0x78);
    iStack_c = 0x6c7bcc;
    piVar6 = (int *)(**(code **)(*piVar6 + 0x80))();
    if ((int)piVar6 < (int)unaff_EBX) {
      param_5 = (IBinding *)&DAT_00963cc8;
      param_4 = *(int **)(unaff_EBP + -0x18);
      param_2 = (int *)0x6c7bde;
      param_3 = piVar6;
      FUN_00878e09();
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    param_5 = (IBinding *)(unaff_EBP + -0x84);
  }
  param_4 = (int *)0x6c7e67;
  param_5 = (IBinding *)FUN_00402bc3();
  if ((int)param_5 < (int)unaff_EBX) {
    param_4 = (int *)0x6c7e72;
    FUN_00878dfb();
  }
LAB_006c7e72:
  param_5 = *(IBinding **)(unaff_EBP + -0x10);
  *(char *)(unaff_EBP + -4) = cVar9;
  if (param_5 != (IBinding *)unaff_EBX) {
    param_4 = (int *)0x6c7e82;
    (**(code **)(*(int *)param_5 + 8))();
  }
LAB_006c7e82:
  do {
    do {
      piVar6 = (int *)(*(int *)(unaff_EBP + -0x3c) + 1);
      *(int **)(unaff_EBP + -0x3c) = piVar6;
      if (0x58 < (int)piVar6) {
        param_5 = (IBinding *)(unaff_EBP + -0x50);
        param_4 = (int *)0x6c7e9e;
        VariantInit((VARIANTARG *)param_5);
        param_4 = (int *)(unaff_EBP + -0x50);
        param_5 = (IBinding *)&DAT_00980690;
        param_3 = (int *)0x6c7ead;
        param_5 = (IBinding *)FUN_00402e32();
        if ((int)param_5 < (int)unaff_EBX) {
          param_4 = (int *)0x6c7eb9;
          FUN_00878dfb();
        }
        param_5 = (IBinding *)(unaff_EBP + -0x60);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        param_4 = (int *)0x6c7ec3;
        VariantInit((VARIANTARG *)param_5);
        param_4 = (int *)(unaff_EBP + -0x60);
        param_5 = (IBinding *)&DAT_00980690;
        param_3 = (int *)0x6c7ecd;
        param_5 = (IBinding *)FUN_00402e32();
        if ((int)param_5 < (int)unaff_EBX) {
          param_4 = (int *)0x6c7ed9;
          FUN_00878dfb();
        }
        param_5 = (IBinding *)&DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        param_4 = (int *)0x6c7ee9;
        FUN_00403191();
        param_5 = (IBinding *)&DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        param_4 = (int *)0x6c7ef9;
        FUN_00403191();
        param_5 = (IBinding *)&DAT_00980690;
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        param_4 = (int *)0x6c7f09;
        FUN_00403191();
        piVar6 = *(int **)(*(int *)(unaff_EBP + -0x30) + 0xb88);
        *(undefined1 *)(unaff_EBP + -4) = 0x1b;
        if (piVar6 == unaff_EBX) {
          param_5 = (IBinding *)0x80004003;
          param_4 = (int *)0x6c7f28;
          FUN_00878dfb();
        }
        param_5 = (IBinding *)(unaff_EBP + -0x50);
        param_4 = (int *)(unaff_EBP + -0x60);
        param_3 = (int *)(unaff_EBP + -0x84);
        param_2 = (int *)(unaff_EBP + -0x94);
        param_1 = (int *)(unaff_EBP + -0xa4);
        FUN_004250ac();
        param_5 = (IBinding *)(unaff_EBP + -0xb4);
        param_4 = (int *)0x6c7f62;
        param_5 = (IBinding *)FUN_00402bc3();
        if ((int)param_5 < (int)unaff_EBX) {
          param_4 = (int *)0x6c7f6d;
          FUN_00878dfb();
        }
        param_5 = (IBinding *)(unaff_EBP + -0xa4);
        *(undefined1 *)(unaff_EBP + -4) = 0x1a;
        param_4 = (int *)0x6c7f7d;
        param_5 = (IBinding *)FUN_00402bc3();
        if ((int)param_5 < (int)unaff_EBX) {
          param_4 = (int *)0x6c7f88;
          FUN_00878dfb();
        }
        param_5 = (IBinding *)(unaff_EBP + -0x94);
        *(undefined1 *)(unaff_EBP + -4) = 0x19;
        param_4 = (int *)0x6c7f98;
        param_5 = (IBinding *)FUN_00402bc3();
        if ((int)param_5 < (int)unaff_EBX) {
          param_4 = (int *)0x6c7fa3;
          FUN_00878dfb();
        }
        param_5 = (IBinding *)(unaff_EBP + -0x84);
        *(undefined1 *)(unaff_EBP + -4) = 0x18;
        param_4 = (int *)0x6c7fb3;
        param_5 = (IBinding *)FUN_00402bc3();
        if ((int)param_5 < (int)unaff_EBX) {
          param_4 = (int *)0x6c7fbe;
          FUN_00878dfb();
        }
        param_5 = (IBinding *)(unaff_EBP + -0x60);
        *(undefined1 *)(unaff_EBP + -4) = 0x17;
        param_4 = (int *)0x6c7fcb;
        param_5 = (IBinding *)FUN_00402bc3();
        if ((int)param_5 < (int)unaff_EBX) {
          param_4 = (int *)0x6c7fd6;
          FUN_00878dfb();
        }
        param_5 = (IBinding *)(unaff_EBP + -0x50);
        *(char *)(unaff_EBP + -4) = cVar9;
        param_4 = (int *)0x6c7fe2;
        param_5 = (IBinding *)FUN_00402bc3();
        if ((int)param_5 < (int)unaff_EBX) {
          param_4 = (int *)0x6c7fed;
          FUN_00878dfb();
        }
        param_5 = *(IBinding **)(unaff_EBP + -0x14);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (param_5 != (IBinding *)unaff_EBX) {
          param_4 = (int *)0x6c7ffe;
          (**(code **)(*(int *)param_5 + 8))();
        }
        ExceptionList = *(void **)(unaff_EBP + -0xc);
        return;
      }
      iVar7 = *(int *)(unaff_EBP + -0x30);
      iVar5 = iVar7 + (int)piVar6 * 0xc;
      bVar1 = *(byte *)(iVar5 + 0x578);
      *(int *)(unaff_EBP + -0x18) = iVar5;
      *(int **)(unaff_EBP + -0x2c) = (int *)(uint)bVar1;
    } while ((int *)(uint)bVar1 == unaff_EBX);
    param_5 = (IBinding *)(unaff_EBP + -0x24);
    param_4 = (int *)(unaff_EBP + -0x1c);
    param_2 = (int *)0x6c74cc;
    param_3 = piVar6;
    FUN_006c831e();
  } while ((*(int **)(unaff_EBP + -0x1c) == unaff_EBX) &&
          (*(int **)(unaff_EBP + -0x24) == unaff_EBX));
  *(int **)(unaff_EBP + -0x10) = unaff_EBX;
  cVar2 = *(char *)(iVar5 + 0x578);
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if ((cVar2 == '\x02') || ((cVar2 == '\x03' || (cVar2 == '\a')))) {
    iStack_c = *(undefined4 *)(iVar5 + 0x579);
    piVar6 = *(int **)(iVar5 + 0x580);
    piStack_10 = *(int **)(unaff_EBP + -0x24) + 8;
    *(int *)(unaff_EBP + -0x18) = iStack_c;
    iStack_14 = unaff_EBP + -0x14;
    *(int ***)(unaff_EBP + -0x20) = &piStack_10;
    param_1 = unaff_EBX;
    param_2 = unaff_EBX;
    param_3 = unaff_EBX;
    FUN_0046fc23();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iStack_14 = 0x6c752e;
    FUN_0048b97b();
    iStack_14 = 0x6c7535;
    FUN_005558b0();
    if (*(int *)(unaff_EBP + -0x2c) == 2) {
      param_3 = (int *)(iVar7 + 0xb7c);
      *(undefined1 **)(unaff_EBP + -0x20) = &stack0x00000010;
      param_2 = (int *)0x6c754e;
      FUN_00424dbc();
      param_2 = (int *)(*(int *)(unaff_EBP + -0x24) + 0x14);
      param_1 = *(int **)(unaff_EBP + -0x1c);
      *(BADSPACEBASE **)(unaff_EBP + -0x20) = register0x00000010;
      param_3 = piVar6;
      FUN_0046fc23();
      FUN_007d3201();
    }
    if ((*(int *)(unaff_EBP + -0x2c) == 3) && ((int)piVar6 <= (int)unaff_EBX)) {
      if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x6c7589;
        FUN_00878dfb();
      }
      piVar6 = *(int **)(unaff_EBP + -0x14);
      param_5 = (IBinding *)0xa0808080;
      param_4 = (int *)0x20;
      param_3 = (int *)0x20;
      param_2 = *(int **)(unaff_EBP + -0x24);
      param_1 = *(int **)(unaff_EBP + -0x1c);
      param_3 = (int *)(**(code **)(*piVar6 + 0x8c))();
      if ((int)param_3 < (int)unaff_EBX) {
        param_5 = (IBinding *)&DAT_00963cc8;
        param_2 = (int *)0x6c75b4;
        param_4 = piVar6;
        FUN_00878e09();
      }
    }
    param_3 = *(int **)(unaff_EBP + -0x18);
    param_2 = (int *)(unaff_EBP + -0x70);
    param_1 = (int *)0x6c75c8;
    puVar3 = (undefined4 *)FUN_005536ce();
    param_5 = (IBinding *)*puVar3;
    param_4 = (int *)0x6c75d2;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),param_5);
    param_5 = (IBinding *)0x6c75da;
    FUN_004125e6();
    goto LAB_006c7b12;
  }
  if (cVar2 == '\x01') {
    param_5 = *(IBinding **)(iVar5 + 0x579);
    param_4 = (int *)0x6c75f8;
    iVar5 = FUN_0064d61f();
    param_5 = *(IBinding **)(iVar5 + 0x90);
    param_4 = (int *)0x6c7606;
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),param_5);
    param_5 = (IBinding *)0x3;
    param_4 = (int *)0xff;
    param_3 = (int *)0x6c7615;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x6c7629;
      FUN_00878dfb();
      if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x6c7634;
        FUN_00878dfb();
      }
    }
    if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x6c7642;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + -0x2c) = piVar6;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    param_5 = (IBinding *)0x6c7653;
    iVar5 = FUN_0040eed0();
    *(int *)(unaff_EBP + -0x38) = (*(int *)(unaff_EBP + -0x24) - iVar5) + 0x20;
    param_5 = (IBinding *)0x6c7667;
    FUN_0040eea9();
    param_1 = *(int **)(unaff_EBP + -0x18);
    param_2 = *(int **)(unaff_EBP + -0x50);
    param_3 = *(int **)(unaff_EBP + -0x4c);
    param_4 = *(int **)(unaff_EBP + -0x48);
    param_5 = *(IBinding **)(unaff_EBP + -0x44);
    iStack_c = 0x6c768a;
    piVar6 = (int *)(**(code **)(*piVar6 + 0x80))();
    if ((int)piVar6 < (int)unaff_EBX) {
      param_5 = (IBinding *)&DAT_00963cc8;
      param_4 = *(int **)(unaff_EBP + -0x2c);
      param_2 = (int *)0x6c769c;
      param_3 = piVar6;
      FUN_00878e09();
    }
    param_5 = (IBinding *)(unaff_EBP + -0x50);
    *(undefined1 *)(unaff_EBP + -4) = 4;
    param_4 = (int *)0x6c76a9;
    param_5 = (IBinding *)FUN_00402bc3();
    if ((int)param_5 < (int)unaff_EBX) {
      param_4 = (int *)0x6c76b8;
      FUN_00878dfb();
    }
    goto LAB_006c7b12;
  }
  if (cVar2 == '\b') {
    *(int **)(unaff_EBP + -0x28) = unaff_EBX;
    param_5 = (IBinding *)0xff7;
    param_4 = (int *)(unaff_EBP + -0x6c);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    param_3 = (int *)0x6c76df;
    puVar3 = (undefined4 *)FUN_00679d22();
    param_5 = *(IBinding **)(iVar5 + 0x579);
    param_4 = (int *)*puVar3;
    param_3 = (int *)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 8;
    param_2 = (int *)0x6c76f5;
    FUN_00434e21();
    *(undefined1 *)(unaff_EBP + -4) = 7;
    if (*(int **)(unaff_EBP + -0x6c) != unaff_EBX) {
      param_5 = (IBinding *)(*(int **)(unaff_EBP + -0x6c) + -3);
      param_4 = (int *)0x6c770c;
      FUN_00434e38();
    }
    param_5 = (IBinding *)&DAT_00980690;
    param_4 = (int *)0x6c771e;
    FUN_00403191();
    param_5 = (IBinding *)&DAT_00980690;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    param_4 = (int *)0x6c772b;
    FUN_00403191();
    param_3 = (int *)0xffffffff;
    param_2 = *(int **)(unaff_EBP + -0x28);
    *(undefined1 *)(unaff_EBP + -4) = 10;
    param_1 = unaff_EBX;
    param_4 = unaff_EBX;
    param_5 = (IBinding *)unaff_EBX;
    (*DAT_0097b4c8)();
    FUN_0087a1b0();
    iStack_c = unaff_EBP + -0xe4;
    piStack_10 = (int *)(unaff_EBP + -0x60);
    iStack_14 = -1;
    uVar4 = FUN_00449713(&stack0x00000000);
    uVar4 = FUN_00456ad5(uVar4);
    *(int **)(unaff_EBP + -0x20) = &iStack_14;
    FUN_004033a1(uVar4);
    iVar5 = unaff_EBP + -0xf4;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_00405a1d(iVar5);
    FUN_00402660();
    FUN_00404a02(iVar5);
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    iStack_c = 0x6c77a1;
    piVar6 = (int *)FUN_004032b4();
    *(int **)(unaff_EBP + -100) = piVar6;
    *(int **)(unaff_EBP + -0x40) = unaff_EBX;
    if (piVar6 != unaff_EBX) {
      iVar5 = FUN_0041a581();
      if ((iVar5 < (int)unaff_EBX) && (iVar5 != -0x7fffbffe)) {
        FUN_00878dfb();
      }
    }
    _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
              ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
               *(IBinding **)(unaff_EBP + -0x40));
    FUN_004125e6();
    *(undefined1 *)(unaff_EBP + -4) = 10;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 9;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar5 = FUN_00402bc3();
    if (iVar5 < (int)unaff_EBX) {
      FUN_00878dfb();
    }
    iStack_c = 0x6c783b;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
      FUN_00878dfb();
      if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
        FUN_00878dfb();
      }
    }
    if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
      FUN_00878dfb();
    }
    unaff_ESI = *(int **)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + -0x2c) = unaff_ESI;
    *(undefined4 *)(unaff_EBP + -0x18) = *(undefined4 *)(unaff_EBP + -0x10);
    iVar5 = FUN_0040eed0();
    in_EAX = (*(int *)(unaff_EBP + -0x24) - iVar5) + 0x20;
    goto code_r0x006c7883;
  }
  if ((cVar2 != '\x04') && (cVar2 != '\x05')) {
    if (cVar2 != '\x06') goto LAB_006c7b12;
    iVar5 = *(int *)(unaff_EBP + -0x18);
  }
  *(int **)(unaff_EBP + -0x28) = unaff_EBX;
  param_5 = (IBinding *)0x950;
  param_4 = (int *)(unaff_EBP + -0x74);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  param_3 = (int *)0x6c792e;
  puVar3 = (undefined4 *)FUN_00679d22();
  param_5 = *(IBinding **)(iVar5 + 0x579);
  param_4 = (int *)*puVar3;
  param_3 = (int *)(unaff_EBP + -0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0xf;
  param_2 = (int *)0x6c7944;
  FUN_00434e21();
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  if (*(int **)(unaff_EBP + -0x74) != unaff_EBX) {
    param_5 = (IBinding *)(*(int **)(unaff_EBP + -0x74) + -3);
    param_4 = (int *)0x6c795b;
    FUN_00434e38();
  }
  param_3 = (int *)0xffffffff;
  param_2 = *(int **)(unaff_EBP + -0x28);
  (*DAT_0097b4c8)();
  param_5 = (IBinding *)0x6c7978;
  FUN_0087a1b0();
  param_3 = (int *)0xffffffff;
  param_1 = (int *)0x6c7987;
  param_2 = (int *)&stack0x00000018;
  param_1 = (int *)FUN_00449713();
  param_2 = (int *)FUN_00456ad5();
  *(undefined1 **)(unaff_EBP + -0x20) = &stack0x0000000c;
  param_1 = (int *)0x6c799a;
  FUN_004033a1();
  param_2 = (int *)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  param_1 = (int *)0x6c79b0;
  FUN_0040263d();
  param_1 = (int *)0x6c79b7;
  FUN_004048a4();
  *(undefined1 *)(unaff_EBP + -4) = 0x11;
  param_3 = (int *)0x6c79c2;
  uVar4 = FUN_004032b4();
  *(undefined4 *)(unaff_EBP + -0x68) = uVar4;
  param_5 = (IBinding *)(unaff_EBP + -0x68);
  param_4 = (int *)0x6c79d1;
  param_5 = (IBinding *)FUN_0041a581();
  if (((int)param_5 < (int)unaff_EBX) && (param_5 != (IBinding *)0x80004002)) {
    param_4 = (int *)0x6c79e2;
    FUN_00878dfb();
  }
  param_5 = (IBinding *)(unaff_EBP + -0xb4);
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  param_4 = (int *)0x6c79f2;
  param_5 = (IBinding *)FUN_00402bc3();
  if ((int)param_5 < (int)unaff_EBX) {
    param_4 = (int *)0x6c79fd;
    FUN_00878dfb();
  }
  if (*(int **)(unaff_EBP + -0x10) != unaff_EBX) {
    param_5 = (IBinding *)0x3;
    param_4 = (int *)0xff;
    param_3 = (int *)0x6c7a18;
    FUN_004031b7();
    *(undefined1 *)(unaff_EBP + -4) = 0x12;
    if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x6c7a2c;
      FUN_00878dfb();
      if (*(int **)(unaff_EBP + -0x10) == unaff_EBX) {
        param_5 = (IBinding *)0x80004003;
        param_4 = (int *)0x6c7a37;
        FUN_00878dfb();
      }
    }
    if (*(int **)(unaff_EBP + -0x14) == unaff_EBX) {
      param_5 = (IBinding *)0x80004003;
      param_4 = (int *)0x6c7a45;
      FUN_00878dfb();
    }
    piVar6 = *(int **)(unaff_EBP + -0x14);
    *(int **)(unaff_EBP + -0x38) = piVar6;
    *(undefined4 *)(unaff_EBP + -0x34) = *(undefined4 *)(unaff_EBP + -0x10);
    param_5 = (IBinding *)0x6c7a56;
    iVar5 = FUN_0040eed0();
    *(int *)(unaff_EBP + -0x20) = (*(int *)(unaff_EBP + -0x24) - iVar5) + 0x20;
    param_5 = (IBinding *)0x6c7a6a;
    FUN_0040eea9();
    param_1 = *(int **)(unaff_EBP + -0x34);
    param_2 = *(int **)(unaff_EBP + -0xd4);
    param_3 = *(int **)(unaff_EBP + -0xd0);
    param_4 = *(int **)(unaff_EBP + -0xcc);
    param_5 = *(IBinding **)(unaff_EBP + -200);
    iStack_c = 0x6c7a90;
    piVar6 = (int *)(**(code **)(*piVar6 + 0x80))();
    if ((int)piVar6 < (int)unaff_EBX) {
      param_5 = (IBinding *)&DAT_00963cc8;
      param_4 = *(int **)(unaff_EBP + -0x38);
      param_2 = (int *)0x6c7aa2;
      param_3 = piVar6;
      FUN_00878e09();
    }
    param_5 = (IBinding *)(unaff_EBP + -0xd4);
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    param_4 = (int *)0x6c7ab2;
    param_5 = (IBinding *)FUN_00402bc3();
    if ((int)param_5 < (int)unaff_EBX) {
      param_4 = (int *)0x6c7abd;
      FUN_00878dfb();
    }
    param_5 = *(IBinding **)(*(int *)(unaff_EBP + -0x18) + 0x579);
    if ((int)param_5 + -0x46 < 0x25) goto LAB_006c7aea;
  }
  *(undefined1 *)(unaff_EBP + -4) = 4;
  param_5 = (IBinding *)0x6c7ada;
  FUN_00414ebb();
  *(char *)(unaff_EBP + -4) = cVar9;
  param_5 = (IBinding *)0x6c7ae5;
  FUN_004125e6();
  goto LAB_006c7e82;
LAB_006c7aea:
  iVar5 = *(int *)(unaff_EBP + -0x30);
  param_4 = *(int **)(unaff_EBP + -0x2c);
  param_3 = (int *)0x6c7af8;
  iVar7 = FUN_006c978b();
  *(undefined4 *)(iVar5 + 0x9ac + iVar7 * 0xc) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  param_5 = (IBinding *)0x6c7b12;
  FUN_00414ebb();
  goto LAB_006c7b12;
}


