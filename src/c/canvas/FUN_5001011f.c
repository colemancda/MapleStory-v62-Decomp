/* FUN_5001011f - 0x5001011f in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


/* WARNING: Removing unreachable block (ram,0x500104ed) */

void FUN_5001011f(void)

{
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var1;
  byte bVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iStackY_b8;
  
  FUN_50012d80();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff88;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_50010761();
    return;
  }
  FUN_500120ab();
  piVar9 = (int *)(-(uint)(unaff_EBP != 0x78) & unaff_EBP - 0x74U);
  bVar2 = *(byte *)(piVar9 + 2);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  *(int **)(unaff_EBP + -0x18) = piVar9;
  if ((bVar2 & 0x10) != 0) {
    *(undefined1 *)(unaff_EBP + -0x11) = 0;
    FUN_500113c3(piVar9,unaff_EBP + -0x11,1);
    piVar5 = *(int **)(unaff_EBP + 8);
    *(int **)(unaff_EBP + -0x24) = piVar5 + 0x20;
    FUN_500024f7();
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_500113c3(piVar9,unaff_EBP + 0xb,1);
    if (*(char *)(unaff_EBP + 0xb) == '\0') {
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar5 + 0x22),(IBinding *)0x0)
      ;
    }
    else {
      p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(piVar5 + 0x22);
      FUN_5000c8ce(u_Property_50019500,p_Var1,0);
      if (*(int *)p_Var1 == 0) {
        FUN_50012c97(0x80004003);
      }
      piVar4 = *(int **)p_Var1;
      iVar7 = (**(code **)(*piVar4 + 0x10))();
      if (iVar7 < 0) {
        FUN_50012ca5(iVar7,piVar4,&DAT_50018358);
      }
    }
    piVar4 = piVar5 + 0x21;
    *piVar4 = *piVar4 + -1;
    iVar7 = *piVar4;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar7 == 0) {
      piVar5[0x20] = 0;
    }
    *(int **)(unaff_EBP + -0x24) = piVar5 + 8;
    FUN_500024f7();
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_500115e9(piVar9,piVar5 + 10);
    FUN_500115e9(*(void **)(unaff_EBP + -0x18),piVar5 + 0xb);
    if ((0xffff < (uint)piVar5[10]) || (0xffff < (uint)piVar5[0xb])) {
      *(undefined4 *)(unaff_EBP + -0x2c) = 0x570;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x2c),(ThrowInfo *)&DAT_50016da8);
    }
    FUN_500115e9(*(void **)(unaff_EBP + -0x18),piVar5 + 6);
    iVar7 = piVar5[6];
    if ((iVar7 < 1) || (((2 < iVar7 && (iVar7 != 0x201)) && (iVar7 != 0x402)))) {
      *(undefined4 *)(unaff_EBP + -0x28) = 0x570;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_50016da8);
    }
    FUN_500115e9(*(void **)(unaff_EBP + -0x18),piVar5 + 7);
    if (piVar5[7] < 0) {
      *(undefined4 *)(unaff_EBP + -0x1c) = 0x570;
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x1c),(ThrowInfo *)&DAT_50016da8);
    }
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    for (iVar7 = 0; iVar7 < 4; iVar7 = iVar7 + 1) {
      FUN_500115e9(*(void **)(unaff_EBP + -0x18),(int *)(unaff_EBP + 0xc));
      if (*(int *)(unaff_EBP + 0xc) != 0) {
        *(undefined4 *)(unaff_EBP + -0x20) = 0x570;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException((void *)(unaff_EBP + -0x20),(ThrowInfo *)&DAT_50016da8);
      }
    }
    FUN_500069c0((void *)(unaff_EBP + -0x54),piVar5[6],3);
    iVar7 = piVar5[7];
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_500069c0((void *)(unaff_EBP + -0x44),iVar7,3);
    iVar7 = *piVar5;
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iVar7 = (**(code **)(iVar7 + 0x2c))();
    if (iVar7 < 0) {
      FUN_50012ca5(iVar7,piVar5,&DAT_50018368);
    }
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar7 = FUN_5000630c((short *)(unaff_EBP + -0x44));
    if (iVar7 < 0) {
      FUN_50012c97(iVar7);
    }
    *(undefined1 *)(unaff_EBP + -4) = 3;
    iVar7 = FUN_5000630c((short *)(unaff_EBP + -0x54));
    if (iVar7 < 0) {
      FUN_50012c97(iVar7);
    }
    (**(code **)(**(int **)(unaff_EBP + -0x18) + 4))();
    iVar7 = extraout_ECX;
    if (*(int *)(unaff_EBP + 8) != 0) {
      piVar9 = (int *)FUN_500127a2((void *)(unaff_EBP + -0x78),unaff_EBP + -0x18);
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_5001077a();
      FUN_500107af(piVar9);
      iStackY_b8 = unaff_EBP + -0x78;
      FUN_50010dc0();
      iVar7 = 0;
      if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
        FUN_500028a0(*(int **)(unaff_EBP + -0x18));
        iVar7 = extraout_ECX_00;
      }
    }
    puVar3 = *(undefined4 **)(unaff_EBP + -0x24);
    piVar9 = puVar3 + 1;
    *piVar9 = *piVar9 + -1;
    iVar8 = *piVar9;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar8 == 0) {
      *puVar3 = 0;
    }
    if (piVar5[0x22] != 0) {
      *(int **)(unaff_EBP + -0x24) = &iStackY_b8;
      iStackY_b8 = iVar7;
      FUN_50011ebf(&iStackY_b8);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_5001149e(piVar5 + 0x22);
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_50011fe6();
      *(undefined1 *)(unaff_EBP + -4) = 8;
      iStackY_b8 = 0x50010402;
      iVar7 = FUN_5000eb69();
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      *(int *)(unaff_EBP + 8) = iVar7;
      if (((iVar7 != 0) &&
          (iVar7 = FUN_50011c79((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + 8)), iVar7 < 0)) &&
         (iVar7 != -0x7fffbffe)) {
        FUN_50012c97(iVar7);
      }
      *(undefined1 *)(unaff_EBP + -4) = 10;
      iVar7 = FUN_5000630c((short *)(unaff_EBP + -0x54));
      if (iVar7 < 0) {
        FUN_50012c97(iVar7);
      }
      piVar9 = (int *)0x0;
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        piVar9 = FUN_5001205d(*(int **)(unaff_EBP + 0xc));
        iVar7 = *(int *)(unaff_EBP + 0xc);
        piVar5[0x23] = (int)piVar9;
        if (iVar7 == 0) {
          FUN_50012c97(0x80004003);
        }
        piVar4 = FUN_50012084(*(int **)(unaff_EBP + 0xc));
        piVar9 = *(int **)(unaff_EBP + 0xc);
        piVar5[0x24] = (int)piVar4;
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (piVar9 != (int *)0x0) {
        (**(code **)(*piVar9 + 8))();
      }
    }
    goto LAB_50010719;
  }
  *(undefined1 *)(unaff_EBP + -0x11) = 0;
  FUN_500113fc(piVar9,unaff_EBP + -0x11,1);
  iVar7 = *(int *)(unaff_EBP + 8);
  *(int *)(unaff_EBP + 8) = iVar7 + 0x80;
  FUN_500024f7();
  iVar8 = *(int *)(iVar7 + 0x88);
  p_Var1 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar7 + 0x88);
  *(undefined1 *)(unaff_EBP + -4) = 0xb;
  if (iVar8 == 0) {
LAB_5001050f:
    FUN_500114b4(piVar9,0);
  }
  else {
    piVar5 = FUN_5000ec6b(*(int **)p_Var1);
    if (piVar5 == (int *)0x0) {
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(p_Var1,(IBinding *)0x0);
    }
    if (*(int *)p_Var1 == 0) goto LAB_5001050f;
    FUN_500114b4(piVar9,1);
    if (*(int *)p_Var1 == 0) {
      FUN_50012c97(0x80004003);
    }
    piVar5 = *(int **)p_Var1;
    iVar8 = (**(code **)(*piVar5 + 0x10))();
    if (iVar8 < 0) {
      FUN_50012ca5(iVar8,piVar5,&DAT_50018358);
    }
  }
  piVar5 = (int *)(iVar7 + 0x84);
  *piVar5 = *piVar5 + -1;
  iVar8 = *piVar5;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar8 == 0) {
    *(undefined4 *)(iVar7 + 0x80) = 0;
  }
  *(int *)(unaff_EBP + -0x18) = iVar7 + 0x20;
  FUN_500024f7();
  iVar8 = *(int *)(iVar7 + 0x28);
  *(undefined1 *)(unaff_EBP + -4) = 0xc;
  FUN_50011651(piVar9,iVar8);
  FUN_50011651(piVar9,*(int *)(iVar7 + 0x2c));
  FUN_50011651(piVar9,*(int *)(iVar7 + 0x18));
  FUN_50011651(piVar9,*(int *)(iVar7 + 0x1c));
  for (iVar8 = 0; iVar8 < 4; iVar8 = iVar8 + 1) {
    FUN_50011651(piVar9,0);
  }
  iVar8 = *(int *)(iVar7 + 0x30);
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if ((iVar8 == 0) || (*(int *)(iVar7 + 0x34) == 0)) {
    (**(code **)(*piVar9 + 8))();
  }
  else if (*(int *)(unaff_EBP + -0x58) == 0) {
    *(undefined4 *)(unaff_EBP + -0x40) = 0;
    *(undefined4 *)(unaff_EBP + -0x3c) = 0;
    *(undefined4 *)(unaff_EBP + -0x38) = 0;
    *(undefined ***)(unaff_EBP + -0x44) = &PTR_FUN_50015618;
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    piVar5 = (int *)FUN_500127a2((void *)(unaff_EBP + -0x78),unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0xf;
    FUN_5001077a();
    FUN_500107af(piVar5);
    FUN_50010dc0();
    *(undefined1 *)(unaff_EBP + -4) = 0xe;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      FUN_500028a0(*(int **)(unaff_EBP + 8));
    }
    *(undefined4 *)(unaff_EBP + 0xc) = *(undefined4 *)(unaff_EBP + -0x3c);
    (**(code **)(*piVar9 + 8))();
    piVar9 = (int *)FUN_500127a2((void *)(unaff_EBP + -0x78),unaff_EBP + 8);
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    FUN_5001077a();
    FUN_500107af(piVar9);
    iStackY_b8 = unaff_EBP + -0x78;
    FUN_50010dc0();
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      FUN_500028a0(*(int **)(unaff_EBP + 8));
    }
  }
  else {
    uVar6 = FUN_5001280a(unaff_EBP + -0x78);
    *(undefined4 *)(unaff_EBP + 8) = uVar6;
    (**(code **)(*piVar9 + 8))();
    piVar5 = (int *)FUN_500127a2((void *)(unaff_EBP + -0x78),unaff_EBP + -0x24);
    *(undefined1 *)(unaff_EBP + -4) = 0xd;
    FUN_5001077a();
    FUN_500107af(piVar5);
    FUN_50010dc0();
    *(undefined1 *)(unaff_EBP + -4) = 0xc;
    if (*(int **)(unaff_EBP + -0x24) != (int *)0x0) {
      FUN_500028a0(*(int **)(unaff_EBP + -0x24));
    }
    iVar7 = FUN_5001280a(unaff_EBP + -0x78);
    FUN_500128fc((void *)(unaff_EBP + -0x78),*(int *)(unaff_EBP + 8),0);
    *(int *)(unaff_EBP + 0xc) = (iVar7 - *(int *)(unaff_EBP + 8)) + -4;
    (**(code **)(*piVar9 + 8))();
    iStackY_b8 = 0x5001065b;
    FUN_500128fc((void *)(unaff_EBP + -0x78),iVar7,0);
  }
  puVar3 = *(undefined4 **)(unaff_EBP + -0x18);
  piVar9 = puVar3 + 1;
  *piVar9 = *piVar9 + -1;
  if (*piVar9 == 0) {
    *puVar3 = 0;
  }
LAB_50010719:
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_50012c26();
  FUN_50010761();
  return;
}


