/* PcCreateObject - 0x50c04cd1 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void PcCreateObject(void)

{
  undefined4 *puVar1;
  int iVar2;
  void *this;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int unaff_EBP;
  bool bVar6;
  
                    /* 0x4cd1  3  PcCreateObject */
  FUN_50c10270();
  bVar6 = DAT_50c1ca84 == 0;
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffd4;
  if (bVar6) {
    FUN_50c04fd6();
    return;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(undefined4 **)(unaff_EBP + 0x10) == (undefined4 *)0x0) {
    FUN_50c04fd6();
    return;
  }
  **(undefined4 **)(unaff_EBP + 0x10) = 0;
  FUN_50c05e35();
  *(undefined4 *)(unaff_EBP + 8) = 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined4 **)(unaff_EBP + -0x20) = &DAT_50c1cacc;
  FUN_50c026fc();
  *(undefined1 *)(unaff_EBP + -4) = 3;
  iVar2 = FUN_50c053e6(&DAT_50c1cab4,(int *)(unaff_EBP + -0x14),
                       (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)0x0);
  *(int *)(unaff_EBP + -0x1c) = iVar2;
  if (((iVar2 != 0) &&
      (iVar2 = FUN_50c05b7d((void *)(unaff_EBP + 8),(int *)(unaff_EBP + -0x1c)), iVar2 < 0)) &&
     (iVar2 != -0x7fffbffe)) {
    FUN_50c101c4(iVar2);
  }
  _DAT_50c1cad0 = _DAT_50c1cad0 + -1;
  bVar6 = _DAT_50c1cad0 == 0;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (bVar6) {
    DAT_50c1cacc = 0;
  }
  bVar6 = FUN_50c0537e((void *)(unaff_EBP + 8),0);
  if (bVar6) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    this = (void *)FUN_50c05649((void *)(unaff_EBP + -0x18));
    *(undefined1 **)(unaff_EBP + -0x20) = &stack0xffffffd0;
    FUN_50c05e16(&stack0xffffffd0,(int *)(unaff_EBP + -0x14));
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_50c05368((int *)(unaff_EBP + -0x18));
    *(undefined1 *)(unaff_EBP + -4) = 4;
    FUN_50c062f7();
    piVar3 = (int *)FUN_50c06348(this,unaff_EBP + -0x1c);
    if ((int *)*piVar3 == (int *)0x0) {
      uVar4 = 0;
    }
    else {
      iVar2 = *(int *)*piVar3;
      if (iVar2 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(uint *)(iVar2 + -4) >> 1;
      }
    }
    FUN_50c02a72((undefined4 *)(unaff_EBP + -0x1c));
    if (uVar4 == 0) {
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      *(undefined4 **)(unaff_EBP + -0x20) = &DAT_50c1caac;
      FUN_50c026fc();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_50c04fe5(this,(int *)(unaff_EBP + -0x1c));
      *(undefined1 *)(unaff_EBP + -4) = 8;
      FUN_50c05021();
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_50c02a72((undefined4 *)(unaff_EBP + -0x1c));
      FUN_50c0dc70((int *)(unaff_EBP + 8));
      *(undefined4 *)(unaff_EBP + 8) = 0;
      piVar3 = (int *)FUN_50c06382(this,unaff_EBP + -0x1c);
      puVar1 = (undefined4 *)*piVar3;
      *(undefined1 *)(unaff_EBP + -4) = 9;
      if (puVar1 == (undefined4 *)0x0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar1;
      }
      iVar2 = (**(code **)(*(int *)(unaff_EBP + -0x28) + 8))(uVar5,&DAT_50c14860);
      *(undefined1 *)(unaff_EBP + -4) = 7;
      FUN_50c02a72((undefined4 *)(unaff_EBP + -0x1c));
      if (-1 < iVar2) {
        FUN_50c05438();
        _DAT_50c1cab0 = _DAT_50c1cab0 + -1;
        bVar6 = _DAT_50c1cab0 == 0;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (bVar6) {
          DAT_50c1caac = 0;
        }
        *(undefined4 **)(unaff_EBP + -0x20) = &DAT_50c1cacc;
        FUN_50c026fc();
        *(undefined1 *)(unaff_EBP + -4) = 10;
        FUN_50c05438();
        _DAT_50c1cad0 = _DAT_50c1cad0 + -1;
        bVar6 = _DAT_50c1cad0 == 0;
        *(undefined1 *)(unaff_EBP + -4) = 6;
        if (bVar6) {
          DAT_50c1cacc = 0;
        }
        if (*(int *)(unaff_EBP + 8) == 0) {
          FUN_50c101c4(0x80004003);
        }
        (**(code **)(**(int **)(unaff_EBP + 8) + 0xc))
                  (*(int **)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0x14),
                   *(undefined4 *)(unaff_EBP + 0xc));
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          FUN_50c1084c(unaff_EBP + -0x2c);
          *(undefined4 *)(unaff_EBP + -0x28) = 0;
        }
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + -0x18) + 8))();
        }
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
          (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
        }
        if (*(int **)(unaff_EBP + -0x14) != (int *)0x0) {
          FUN_50c02a85(*(int **)(unaff_EBP + -0x14));
        }
        goto LAB_50c04fbd;
      }
      _DAT_50c1cab0 = _DAT_50c1cab0 + -1;
      if (_DAT_50c1cab0 == 0) {
        DAT_50c1caac = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      FUN_50c053d0(unaff_EBP + -0x2c);
      FUN_50c0dc70((int *)(unaff_EBP + -0x18));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
      }
    }
    else {
      FUN_50c0dc70((int *)(unaff_EBP + -0x18));
      FUN_50c0dc70((int *)(unaff_EBP + 8));
    }
  }
  else {
    if (*(int *)(unaff_EBP + 8) == 0) {
      FUN_50c101c4(0x80004003);
    }
    (**(code **)(**(int **)(unaff_EBP + 8) + 0xc))
              (*(int **)(unaff_EBP + 8),*(undefined4 *)(unaff_EBP + 0x14),
               *(undefined4 *)(unaff_EBP + 0xc));
    FUN_50c0dc70((int *)(unaff_EBP + 8));
  }
  FUN_50c02a72((undefined4 *)(unaff_EBP + -0x14));
LAB_50c04fbd:
  FUN_50c04fd6();
  return;
}


