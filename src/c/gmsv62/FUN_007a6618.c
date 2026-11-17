/* FUN_007a6618 - 0x007a6618 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007a6618(void)

{
  undefined1 *puVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_ECX;
  int unaff_EBP;
  undefined1 *puStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  
  FUN_00879bb8();
  if ((*(uint *)(extraout_ECX + 0x52c) & 0xfffffffe) == 0x12) goto LAB_007a6a43;
  iStack_6c = unaff_EBP + -0x24;
  iStack_70 = 0x7a664d;
  FUN_00817e25();
  iStack_6c = 0x7a665c;
  iVar3 = FUN_005f0f5e();
  if (iVar3 != 0) {
    *(int **)(unaff_EBP + -0x14) = &iStack_6c;
    iStack_70 = 0x7a667f;
    FUN_005f1734();
    iStack_70 = 0x7a6686;
    FUN_007b4113();
    goto LAB_007a6a43;
  }
  iStack_6c = *(int *)(unaff_EBP + -0x24);
  iStack_70 = 0x7a669c;
  iVar3 = FUN_005d5d4b();
  if (iVar3 != 0) {
    if (*(int *)(extraout_ECX + 0x2454) != 0) {
      FUN_007b0b2a();
    }
    iVar3 = *(int *)(iVar3 + 0x15c);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    if (iVar3 != 0) {
      iStack_6c = 0x7a66c8;
      InterlockedIncrement((LONG *)(iVar3 + 4));
      if (*(int *)(unaff_EBP + -0x18) != 0) {
        iStack_6c = 0x7a66d6;
        FUN_005dd104();
      }
    }
  }
  *(undefined4 *)(unaff_EBP + -0x10) = DAT_00978368;
  iStack_6c = 0x7a66e8;
  FUN_00455c59();
  if (*(int *)(unaff_EBP + -0x18) != 0) {
    iStack_6c = 0x7a66f6;
    FUN_0045e7c2();
  }
  iStack_6c = 0x7a6705;
  iVar3 = FUN_007c0d75();
  if (iVar3 == 0) {
    iStack_6c = 0x7a688b;
    iVar3 = FUN_004d494d();
    if (iVar3 != 0) {
      if (*(int *)(extraout_ECX + 0x2454) != 0) {
        FUN_007b0b2a();
      }
      puVar1 = *(undefined1 **)(iVar3 + 0x78);
      if (*(undefined1 **)(*(int *)(unaff_EBP + -0x10) + 0x2088) == puVar1) {
        iStack_6c = 0;
        iStack_70 = 0;
        iStack_74 = 0;
        *(undefined1 ***)(unaff_EBP + -0x14) = &puStack_78;
        puStack_78 = puVar1;
        FUN_00679d22(&puStack_78,0xd45);
        iVar3 = FUN_007db791();
        if (iVar3 != 6) goto LAB_007a6938;
      }
      iStack_6c = 0;
      iStack_70 = 0x6f;
      iStack_74 = 0x7a68f0;
      FUN_0060142b();
      *(undefined4 *)(unaff_EBP + -4) = 6;
      iStack_6c = 0x7a6901;
      FUN_00457cda();
      iStack_6c = 0x7a690f;
      FUN_00457d37();
      iStack_6c = 0x7a6918;
      FUN_00457cda();
      iStack_6c = 0x7a6927;
      FUN_004751b2();
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0045ebca();
      goto LAB_007a6a43;
    }
LAB_007a6938:
    iStack_6c = 0x7a6947;
    iVar3 = FUN_005bd6f2();
    if (iVar3 != 0) {
      iStack_6c = 0x7a695c;
      iVar5 = FUN_004029b9();
      *(int *)(unaff_EBP + -0x14) = iVar5;
      *(undefined4 *)(unaff_EBP + -4) = 7;
      if (iVar5 != 0) {
        iStack_70 = iVar3 + 0xc;
        *(int **)(unaff_EBP + -0x10) = &iStack_6c;
        iStack_74 = 0x7a6980;
        FUN_00450368();
        iStack_74 = iVar3 + 8;
        *(int **)(unaff_EBP + -0x18) = &iStack_70;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        puStack_78 = (undefined1 *)0x7a6993;
        FUN_00450368();
        *(undefined1 *)(unaff_EBP + -4) = 7;
        iStack_74 = 0x7a699f;
        FUN_005bc13e();
      }
      goto LAB_007a6a43;
    }
    iStack_6c = 0x7a69b3;
    iVar3 = FUN_007c0e49();
    if (iVar3 == 0) {
      iStack_6c = 0x7a69d2;
      iVar3 = FUN_007c0c0f();
      if (iVar3 != 0) goto LAB_007a69b9;
      iStack_6c = unaff_EBP + -0x54;
      iStack_70 = 0x7a69e7;
      FUN_0043f3d6();
      iStack_70 = unaff_EBP + -0x54;
      iStack_6c = *(int *)(unaff_EBP + -0x24);
      iStack_74 = 0x7a69f7;
      iVar3 = (*DAT_0097b57c)();
      if (iVar3 == 0) {
        iStack_6c = 0x7a6a19;
        FUN_007b2130();
        iStack_70 = unaff_EBP + -100;
        iStack_6c = *(int *)(unaff_EBP + -0x24);
        iStack_74 = 0x7a6a29;
        iVar3 = (*DAT_0097b57c)();
        if (iVar3 != 0) {
          if (*(int *)(extraout_ECX + 0x2454) != 0) {
            iStack_74 = 0x7a6a3c;
            FUN_007b0b2a();
          }
          iStack_74 = 0x7a6a43;
          FUN_007b1e42();
        }
        goto LAB_007a6a43;
      }
      iStack_70 = *(int *)(extraout_ECX + 0xd78);
    }
    else {
LAB_007a69b9:
      iStack_70 = *(int *)(iVar3 + 0xd78);
    }
    iStack_6c = 1;
    iStack_74 = 0x7a6a0c;
    FUN_00849105();
    goto LAB_007a6a43;
  }
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  iVar3 = *(int *)(iVar3 + 0x170c);
  bVar2 = false;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
LAB_007a6803:
    iStack_6c = 0;
    iStack_70 = 0x6f;
    iStack_74 = 0x7a680f;
    FUN_0060142b();
    *(undefined1 *)(unaff_EBP + -4) = 5;
    iStack_6c = 0x7a681d;
    FUN_00457cda();
    iStack_6c = 0x7a682b;
    FUN_00457d37();
    iStack_6c = 0x7a6834;
    FUN_00457cda();
    if (bVar2) {
      iStack_6c = unaff_EBP + -0x10;
      *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffff98;
      iStack_70 = 0x7a6849;
      FUN_00414f8b();
      iStack_6c = 0x7a6851;
      FUN_00459cb5();
    }
    iStack_6c = 0x7a6860;
    FUN_004751b2();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0045ebca();
  }
  else {
    iStack_6c = 0x7a6734;
    iVar3 = FUN_004029b9();
    *(int *)(unaff_EBP + -0x14) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_007e62e9();
    }
    uVar4 = -(uint)(iVar3 != 0) & iVar3 + 8U;
    *(uint *)(unaff_EBP + -0x18) = -(uint)(uVar4 != 0) & uVar4 - 8;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004c26c4();
    bVar2 = true;
    iStack_6c = 1;
    puStack_78 = (undefined1 *)&iStack_70;
    *(int **)(unaff_EBP + -0x14) = &iStack_70;
    iStack_74 = 0x1e4;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_00679d22();
    iStack_74 = 0;
    puStack_78 = (undefined1 *)0x3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004c2677();
    FUN_007eddac();
    iStack_6c = 0;
    iStack_70 = 0x1e;
    iStack_74 = 0;
    puStack_78 = (undefined1 *)0x0;
    FUN_007edfe1();
    FUN_007e6e3c();
    iVar3 = FUN_004bc6a2();
    if (iVar3 == 1) {
      iStack_6c = 0x7a67df;
      FUN_00641b6c();
      *(undefined1 *)(unaff_EBP + -4) = 4;
      iStack_6c = 0x7a67ec;
      FUN_00414f8b();
      *(undefined1 *)(unaff_EBP + -4) = 2;
      FUN_00414ebb();
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_004c26e1();
      goto LAB_007a6803;
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_004c26e1();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00414ebb();
LAB_007a6a43:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


