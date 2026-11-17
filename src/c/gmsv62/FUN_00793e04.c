/* FUN_00793e04 - 0x00793e04 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00793e04(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int *extraout_ECX;
  int extraout_ECX_00;
  int *extraout_ECX_01;
  int unaff_EBP;
  int *piStack_2c;
  int *piStack_28;
  int iStack_24;
  
  FUN_00879bb8();
  iVar3 = extraout_ECX[0x149];
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  iVar1 = DAT_00978368;
  if (iVar3 == 0) {
    *(int *)(unaff_EBP + -0x1c) = DAT_00978368;
    cVar2 = FUN_0042452b();
    if (cVar2 == '\0') {
      iStack_24 = 0x793e45;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 7),
                 (IBinding *)0x0);
      iVar3 = (**(code **)(*extraout_ECX + 8))();
      if (iVar3 != 0) {
        *(undefined4 *)(iVar1 + 0x2d0c) = 0;
      }
    }
    else {
      iStack_24 = 0x793e6b;
      FUN_0045cdbc();
      iStack_24 = 0;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      piStack_28 = (int *)0x793e78;
      FUN_0045ed72();
      iStack_24 = 0x793e7f;
      FUN_0045ee27();
      iVar3 = (**(code **)(*extraout_ECX + 8))();
      if (iVar3 == 0) {
        iStack_24 = 0;
        piStack_28 = (int *)0x1;
        piStack_2c = (int *)0x400;
        piStack_28 = (int *)FUN_00415015();
        piStack_2c = (int *)0x793ea3;
        FUN_00471777();
        iStack_24 = 0x793eb0;
        FUN_004150c0();
        if (*(int *)(unaff_EBP + -0x10) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*(int *)(unaff_EBP + -0x10) + -4);
        }
        if (0x28 < iVar3) {
          iStack_24 = unaff_EBP + 8;
          piStack_28 = (int *)0x793ed1;
          FUN_0045e070();
          *(undefined4 *)(unaff_EBP + -0x18) = 1;
          *(undefined1 *)(unaff_EBP + -4) = 1;
        }
        iStack_24 = 0x793ee5;
        FUN_00414f8b();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        if ((*(byte *)(unaff_EBP + -0x18) & 1) != 0) {
          FUN_00414ebb();
        }
      }
      iStack_24 = 0x793f00;
      FUN_00432cfc();
      iVar3 = *extraout_ECX;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      (**(code **)(iVar3 + 8))();
      piStack_28 = extraout_ECX + 0x34b;
      *(int **)(unaff_EBP + -0x18) = &iStack_24;
      piStack_2c = (int *)0x793f1e;
      iStack_24 = extraout_ECX_00;
      FUN_00433bdf();
      piStack_2c = extraout_ECX + 0x34f;
      *(int ***)(unaff_EBP + -0x18) = &piStack_28;
      piStack_28 = extraout_ECX_01;
      FUN_0041160e();
      *(int ***)(unaff_EBP + -0x18) = &piStack_2c;
      FUN_004059fd(unaff_EBP + -0x14);
      FUN_0046f440();
      iVar3 = (**(code **)(*extraout_ECX + 8))();
      if (iVar3 != 0) {
        iStack_24 = unaff_EBP + -0x10;
        *(undefined1 **)(unaff_EBP + -0x18) = &stack0xffffffe0;
        piStack_28 = (int *)0x793f63;
        FUN_00414f8b();
        iVar3 = *(int *)(unaff_EBP + -0x1c);
        iStack_24 = 0x793f6d;
        FUN_00793f9f();
        *(undefined4 *)(iVar3 + 0x2d0c) = 1;
      }
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_004030b1();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00414ebb();
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


