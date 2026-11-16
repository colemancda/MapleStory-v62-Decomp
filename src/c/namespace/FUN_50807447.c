/* FUN_50807447 - 0x50807447 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


/* WARNING: Removing unreachable block (ram,0x50807730) */

void FUN_50807447(void)

{
  int *this;
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  short *psVar5;
  int iVar6;
  undefined4 uVar7;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this_00;
  IBinding *pIVar8;
  undefined4 uVar9;
  int iVar10;
  int unaff_EBP;
  short *psStack_40;
  undefined4 uStack_3c;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffcc;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x14) = 0;
  piVar1 = *(int **)(unaff_EBP + 8);
  uStack_3c = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  psStack_40 = (short *)0x50807477;
  psVar5 = FUN_508066b0();
  uStack_3c = 0x50807482;
  bVar4 = FUN_5080855a((void *)(unaff_EBP + -0x14),0);
  if (bVar4) {
    if ((psVar5 == (short *)0x0) || (*psVar5 == 0)) {
      uStack_3c = 0x5080757f;
      FUN_508050d0();
      puVar2 = (undefined4 *)*piVar1;
      *(undefined1 *)(unaff_EBP + -4) = 3;
      uVar7 = (*(code *)*puVar2)();
      *(undefined4 *)(unaff_EBP + 0xc) = uVar7;
      FUN_508085f9((int *)(unaff_EBP + 0xc));
      *(undefined4 *)(unaff_EBP + 8) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 5;
      while( true ) {
        *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffc8;
        uStack_3c = 0x508075ab;
        FUN_508085f9((int *)&stack0xffffffc8);
        uStack_3c = 0x508075b3;
        uVar7 = FUN_50808a60();
        if ((char)uVar7 == '\0') break;
        if (*(undefined4 **)(unaff_EBP + 0xc) == *(undefined4 **)(unaff_EBP + 0x10)) {
LAB_508075d0:
          FUN_50808606((int *)(unaff_EBP + 8));
          FUN_50808606((int *)(unaff_EBP + 0xc));
          FUN_508052b4((undefined4 *)(unaff_EBP + -0x18));
          FUN_50808606((int *)(unaff_EBP + -0x14));
          FUN_50807809();
          return;
        }
        uStack_3c = 0x508075cc;
        iVar6 = FUN_508096b2((void *)(unaff_EBP + 0xc),*(undefined4 **)(unaff_EBP + 0x10));
        if (iVar6 == 0) goto LAB_508075d0;
        uStack_3c = 0x50807605;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 8),
                   *(IBinding **)(unaff_EBP + 0xc));
        uStack_3c = 0;
        *(short ***)(unaff_EBP + -0x20) = &psStack_40;
        FUN_50803c5f(&psStack_40,(int *)(unaff_EBP + -0x18));
        *(undefined1 *)(unaff_EBP + -4) = 6;
        FUN_50808544((int *)(unaff_EBP + 0xc));
        *(undefined1 *)(unaff_EBP + -4) = 5;
        FUN_508098f0();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        psStack_40 = (short *)0x5080763c;
        uVar7 = FUN_50804e67();
        *(undefined4 *)(unaff_EBP + -0x1c) = uVar7;
        uStack_3c = 0x5080764b;
        iVar6 = FUN_508053f3((void *)(unaff_EBP + 0xc),(int *)(unaff_EBP + -0x1c));
        if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
          uStack_3c = 0x5080765c;
          FUN_5080dfed(iVar6);
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        uStack_3c = 0x50807669;
        iVar6 = FUN_508037a7((short *)(unaff_EBP + -0x34));
        if (iVar6 < 0) {
          uStack_3c = 0x50807678;
          FUN_5080dfed(iVar6);
        }
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        uStack_3c = 0x5080768e;
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 3;
      if (*(int **)(unaff_EBP + 0xc) != (int *)0x0) {
        uStack_3c = 0x5080769f;
        (**(code **)(**(int **)(unaff_EBP + 0xc) + 8))();
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_508052b4((undefined4 *)(unaff_EBP + -0x18));
      if (*(int *)(unaff_EBP + 0x10) == 0) {
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          uStack_3c = 0x508076c1;
          (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))();
        }
        FUN_50807809();
        return;
      }
      *(int **)(unaff_EBP + 8) = piVar1 + 1;
      FUN_508012a1();
      iVar6 = piVar1[6];
      this = piVar1 + 6;
      *(undefined1 *)(unaff_EBP + -4) = 8;
      *(int **)(unaff_EBP + -0x1c) = this;
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(iVar6 + -4);
      }
      iVar3 = *(int *)(unaff_EBP + 0x14);
      iVar10 = 0;
      *(undefined4 *)(unaff_EBP + 0xc) = 0;
      while ((iVar10 < iVar6 && (*(int *)(*this + 4 + iVar10 * 8) <= iVar3))) {
        iVar10 = iVar10 + 1;
        *(int *)(unaff_EBP + 0xc) = iVar10;
      }
      uStack_3c = 0x5080770e;
      this_00 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)FUN_50808613(this,iVar10);
      uStack_3c = 0x5080771a;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                (this_00,*(IBinding **)(unaff_EBP + 0x10));
      *(int *)(this_00 + 4) = iVar3;
      *(undefined4 *)(unaff_EBP + 0x14) = 0;
      iVar6 = piVar1[4];
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (iVar6 == 0) {
LAB_5080774b:
        pIVar8 = (IBinding *)(**(code **)*piVar1)();
        uStack_3c = 0x5080775a;
        _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                  ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + 0x14),pIVar8);
      }
      else {
        *(undefined4 *)(unaff_EBP + 0x14) = 0;
        uStack_3c = 0x50807746;
        FUN_50804243((void *)piVar1[4],unaff_EBP + 0x14);
        if (*(int *)(unaff_EBP + 0x14) == 0) goto LAB_5080774b;
      }
      if ((undefined4 *)piVar1[5] == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(undefined4 *)piVar1[5];
      }
      uVar9 = (**(code **)*piVar1)();
      psStack_40 = *(short **)(unaff_EBP + 0x14);
      uStack_3c = uVar7;
      iVar6 = (**(code **)(**(int **)(unaff_EBP + 0x10) + 0x20))(*(int **)(unaff_EBP + 0x10),uVar9);
      if (-1 < iVar6) {
        piVar1 = *(int **)(unaff_EBP + 0x14);
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        puVar2 = *(undefined4 **)(unaff_EBP + 8);
        piVar1 = puVar2 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *puVar2 = 0;
        }
        piVar1 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 0;
        if (piVar1 != (int *)0x0) {
          (**(code **)(*piVar1 + 8))(piVar1);
        }
        FUN_50807809();
        return;
      }
      FUN_508086a4(*(int **)(unaff_EBP + -0x1c),
                   (int *)(**(int **)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + 0xc) * 8));
      piVar1 = *(int **)(unaff_EBP + 0x14);
      *(undefined1 *)(unaff_EBP + -4) = 8;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      puVar2 = *(undefined4 **)(unaff_EBP + 8);
      piVar1 = puVar2 + 1;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        *puVar2 = 0;
      }
      piVar1 = *(int **)(unaff_EBP + -0x14);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
      }
      goto LAB_508077c0;
    }
    uStack_3c = 0x508074cf;
    Ordinal_8();
    iVar6 = *piVar1;
    uStack_3c = 0;
    psStack_40 = (short *)(unaff_EBP + -0x34);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    iVar6 = (**(code **)(iVar6 + 8))(psVar5,0);
    if ((((iVar6 != 0) &&
         (iVar6 = FUN_50803865((ushort *)(unaff_EBP + -0x34),(ushort *)(unaff_EBP + -0x34),0,0xd),
         -1 < iVar6)) &&
        (iVar6 = FUN_508053f3((void *)(unaff_EBP + -0x14),(int *)(unaff_EBP + -0x2c)), iVar6 < 0))
       && (iVar6 != -0x7fffbffe)) {
      FUN_5080dfed(iVar6);
    }
    piVar1 = *(int **)(unaff_EBP + -0x14);
    if (piVar1 == (int *)0x0) {
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar6 = FUN_508037a7((short *)(unaff_EBP + -0x34));
      if (iVar6 < 0) {
        FUN_5080dfed(iVar6);
      }
    }
    else {
      (**(code **)(*piVar1 + 0x18))
                (piVar1,0,*(undefined4 *)(unaff_EBP + 0x10),*(undefined4 *)(unaff_EBP + 0x14));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      iVar6 = FUN_508037a7((short *)(unaff_EBP + -0x34));
      if (iVar6 < 0) {
        FUN_5080dfed(iVar6);
      }
    }
  }
  else {
    if (*(int *)(unaff_EBP + -0x14) == 0) {
      uStack_3c = 0x50807495;
      FUN_5080dfed(0x80004003);
    }
    uStack_3c = *(undefined4 *)(unaff_EBP + 0x10);
    psStack_40 = psVar5;
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 0x18))(*(int **)(unaff_EBP + -0x14));
  }
  FUN_50808606((int *)(unaff_EBP + -0x14));
LAB_508077c0:
  FUN_50807809();
  return;
}


