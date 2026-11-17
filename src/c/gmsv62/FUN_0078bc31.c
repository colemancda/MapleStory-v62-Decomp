/* FUN_0078bc31 - 0x0078bc31 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0078bc31(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  int unaff_EBP;
  int iStack_68;
  undefined1 auStack_64 [4];
  undefined4 uStack_60;
  undefined4 uStack_5c;
  uint uStack_58;
  uint uStack_54;
  undefined1 *puStack_50;
  uint uStack_4c;
  int iStack_48;
  
  FUN_00879bb8();
  iStack_48 = extraout_ECX + 0x1738;
  uStack_4c = 0x78bc55;
  uVar1 = FUN_00413367();
  *(undefined4 *)(unaff_EBP + -0x20) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x1734) = uVar1;
  uVar1 = FUN_004133b5();
  *(undefined4 *)(extraout_ECX + 0x1740) = uVar1;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = &DAT_00964178;
  do {
    if (*(int *)(extraout_ECX + 0x95 + **(int **)(unaff_EBP + -0x14) * 4) != 0) {
      iStack_48 = unaff_EBP + -0x1c;
      uStack_4c = 0x78bcb4;
      puVar2 = (undefined4 *)FUN_004497f5();
      iStack_48 = 0x78bcbe;
      _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
                ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(unaff_EBP + -0x10),
                 (IBinding *)*puVar2);
      if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
        iStack_48 = 0x78bccb;
        (**(code **)(**(int **)(unaff_EBP + -0x1c) + 8))();
      }
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        puStack_50 = (undefined1 *)&iStack_48;
        *(int **)(unaff_EBP + -0x18) = &iStack_48;
        uStack_4c = 0x959;
        uStack_54 = 0x78bce8;
        FUN_00679e4e();
        uStack_4c = unaff_EBP + -0x30;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_50 = (undefined1 *)0x78bcf7;
        FUN_0040263d();
        puStack_50 = (undefined1 *)0x78bcfe;
        iStack_48 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        uStack_4c = 0x78bd08;
        uVar1 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
        uStack_4c = unaff_EBP + -0x30;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_50 = (undefined1 *)0x78bd17;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_48 = 0x78bd24;
          FUN_00878dfb();
        }
        iVar3 = 0;
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          uVar1 = FUN_004133b5();
          *(undefined4 *)(extraout_ECX + 0x1734) = uVar1;
          iVar3 = extraout_ECX_00;
        }
        puStack_50 = (undefined1 *)&iStack_48;
        *(int **)(unaff_EBP + -0x18) = &iStack_48;
        uStack_4c = 0x95a;
        uStack_54 = 0x78bd50;
        iStack_48 = iVar3;
        FUN_00679e4e();
        uStack_4c = unaff_EBP + -0x40;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_50 = (undefined1 *)0x78bd5f;
        FUN_0040263d();
        puStack_50 = (undefined1 *)0x78bd66;
        iStack_48 = FUN_004048a4();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        uStack_4c = 0x78bd70;
        uVar1 = FUN_00412550();
        *(undefined4 *)(unaff_EBP + -0x18) = uVar1;
        uStack_4c = unaff_EBP + -0x40;
        *(undefined1 *)(unaff_EBP + -4) = 0;
        puStack_50 = (undefined1 *)0x78bd7f;
        iVar3 = FUN_00402bc3();
        if (iVar3 < 0) {
          iStack_48 = 0x78bd8c;
          FUN_00878dfb();
        }
        if (*(int *)(unaff_EBP + -0x18) != 0) {
          uVar1 = FUN_004133b5();
          *(undefined4 *)(extraout_ECX + 0x1740) = uVar1;
        }
      }
    }
    *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 4;
  } while (*(int *)(unaff_EBP + -0x14) < 0x964188);
  iStack_48 = extraout_ECX + 0x1738;
  uStack_4c = 0x78bdc7;
  iVar3 = FUN_00413367();
  if (iVar3 == *(int *)(unaff_EBP + -0x20)) goto LAB_0078bf24;
  iStack_48 = 0;
  uStack_4c = 0;
  puStack_50 = (undefined1 *)0x0;
  uStack_54 = 0;
  uStack_58 = 0;
  uStack_5c = 0x78bddf;
  uStack_5c = FUN_0078bbe7();
  uStack_60 = 1000;
  *(undefined1 **)(unaff_EBP + -0x20) = auStack_64;
  iStack_68 = extraout_ECX + 0xd74;
  FUN_00433bdf();
  *(int **)(unaff_EBP + -0x1c) = &iStack_68;
  FUN_0041160e(extraout_ECX + 0xd3c);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_00449713();
  uVar1 = FUN_00560272(uVar1);
  *(undefined4 *)(extraout_ECX + 0x1e38) = uVar1;
  iStack_48 = 0x78be30;
  FUN_0079c916();
  *(undefined1 *)(unaff_EBP + -4) = 7;
  piVar4 = (int *)FUN_00429303();
  if (piVar4 == (int *)0x0) {
    iVar3 = -1;
  }
  else {
    iVar3 = (**(code **)(*piVar4 + 0x1c))();
  }
  if ((((iVar3 == 10) || (iVar3 == 0xb)) && (*(char **)(unaff_EBP + -0x18) != (char *)0x0)) &&
     (**(char **)(unaff_EBP + -0x18) != '\0')) {
    iStack_48 = *(int *)(extraout_ECX + 0x1e38);
    uStack_4c = 0;
    puStack_50 = (undefined1 *)0x0;
    uStack_54 = 0;
    uStack_58 = 0;
    uStack_5c = 0;
    uStack_60 = 0x3ed;
    *(undefined1 **)(unaff_EBP + -0x20) = auStack_64;
    iStack_68 = extraout_ECX + 0xd74;
    FUN_00433bdf();
    *(int **)(unaff_EBP + -0x1c) = &iStack_68;
    FUN_0041160e(extraout_ECX + 0xd3c);
    *(undefined1 *)(unaff_EBP + -4) = 7;
LAB_0078bf0c:
    uVar1 = FUN_00449713();
    FUN_00560272(uVar1);
  }
  else if ((*(char **)(extraout_ECX + 0xd80) != (char *)0x0) &&
          (**(char **)(extraout_ECX + 0xd80) != '\0')) {
    uStack_4c = (uint)*(byte *)(extraout_ECX + 0xd8a);
    iStack_48 = *(int *)(extraout_ECX + 0x1e38);
    puStack_50 = (undefined1 *)(uint)*(ushort *)(extraout_ECX + 0xd88);
    uStack_54 = (uint)*(byte *)(extraout_ECX + 0xd86);
    uStack_58 = (uint)*(ushort *)(extraout_ECX + 0xd84);
    uStack_5c = 0;
    uStack_60 = 0x3ec;
    iStack_68 = extraout_ECX + 0xd74;
    *(undefined1 **)(unaff_EBP + -0x20) = auStack_64;
    FUN_00433bdf();
    *(int **)(unaff_EBP + -0x1c) = &iStack_68;
    FUN_0041160e(extraout_ECX + 0xd3c);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    goto LAB_0078bf0c;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00414ebb();
LAB_0078bf24:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    iStack_48 = 0x78bf35;
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


