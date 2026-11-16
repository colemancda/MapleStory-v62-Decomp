/* FUN_50c0d3bb - 0x50c0d3bb in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0d3bb(void)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined2 *puVar5;
  int iVar6;
  uint *puVar7;
  size_t *psVar8;
  int *piVar9;
  void *pvVar10;
  undefined4 uVar11;
  int *piVar12;
  void *pvVar13;
  int unaff_EBP;
  int *this;
  
  FUN_50c10270();
  piVar9 = *(int **)(unaff_EBP + 8);
  this = (int *)(-(uint)(piVar9 != (int *)0x0) & (uint)(piVar9 + 1));
  uVar3 = this[2];
  *(uint *)(unaff_EBP + -0x14) = uVar3 & 0x10;
  if ((uVar3 & 0x10) != 0) {
    FUN_50c0aa71(piVar9[10]);
  }
  iVar6 = FUN_50c0ab6e(piVar9[10]);
  *(int *)(unaff_EBP + -0x10) = iVar6;
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    sVar1 = **(short **)(unaff_EBP + -0x10);
    uVar11 = CONCAT22((short)((uint)*(short **)(unaff_EBP + -0x10) >> 0x10),sVar1);
    *(undefined4 *)(unaff_EBP + -0x18) = uVar11;
    if (sVar1 == 0xd) {
      uVar11 = 9;
    }
    *(char *)(unaff_EBP + 0xb) = (char)uVar11;
    FUN_50c08a3c(this,unaff_EBP + 0xb,1);
  }
  else {
    FUN_50c08a10(this,unaff_EBP + 0xb,1);
    if (*(char *)(unaff_EBP + 0xb) == '\t') {
      *(undefined4 *)(unaff_EBP + -0x18) = 0xd;
    }
    else {
      *(ushort *)(unaff_EBP + -0x18) = (ushort)*(byte *)(unaff_EBP + 0xb);
    }
  }
  uVar2 = *(ushort *)(unaff_EBP + -0x18);
  if (uVar2 < 9) {
    if (uVar2 == 8) {
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_50c064e3();
      }
      else {
        FUN_50c08a10(this,unaff_EBP + 0xb,1);
        piVar9 = (int *)FUN_50c06dac();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        psVar8 = FUN_50c085fa(piVar9);
        *(size_t **)(*(int *)(unaff_EBP + -0x10) + 8) = psVar8;
        FUN_50c02a72((undefined4 *)(unaff_EBP + -0x34));
      }
      goto LAB_50c0d88b;
    }
    if (uVar2 == 0) goto LAB_50c0d88b;
    if (uVar2 != 2) {
      if (uVar2 < 3) goto LAB_50c0d486;
      if (4 < uVar2) {
        if (uVar2 != 5) {
          if (uVar2 == 6) {
            puVar7 = (uint *)(*(int *)(unaff_EBP + -0x10) + 8);
            if ((*(byte *)(this + 2) & 8) == 0) {
              FUN_50c0c1a9(this,(int *)puVar7);
            }
            else {
              FUN_50c0c215(this,*puVar7,*(uint *)(*(int *)(unaff_EBP + -0x10) + 0xc));
            }
            goto LAB_50c0d88b;
          }
          if (uVar2 != 7) goto LAB_50c0d486;
        }
        FUN_50c0b8cb(this,(undefined8 *)(*(int *)(unaff_EBP + -0x10) + 8));
        goto LAB_50c0d88b;
      }
LAB_50c0d579:
      piVar9 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
      if ((*(byte *)(this + 2) & 8) == 0) {
        FUN_50c0c0ab(this,piVar9);
      }
      else {
        FUN_50c0c113(this,*piVar9);
      }
      goto LAB_50c0d88b;
    }
  }
  else if (uVar2 != 0xb) {
    if (uVar2 == 0xd) {
      if (*(int *)(unaff_EBP + -0x14) == 0) {
        FUN_50c0edcd(piVar9,unaff_EBP + -0x24);
        puVar4 = *(undefined4 **)piVar9[9];
        *(undefined4 *)(unaff_EBP + -4) = 3;
        if (puVar4 == (undefined4 *)0x0) {
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = (void *)*puVar4;
        }
        if (*(undefined4 **)(unaff_EBP + -0x24) == (undefined4 *)0x0) {
          pvVar13 = (void *)0x0;
        }
        else {
          pvVar13 = (void *)**(undefined4 **)(unaff_EBP + -0x24);
        }
        FUN_50c0d8a4(pvVar13,pvVar10);
        FUN_50c05e8d();
        *(undefined1 *)(unaff_EBP + -4) = 4;
        if (*(undefined4 **)(unaff_EBP + -0x1c) == (undefined4 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = **(undefined4 **)(unaff_EBP + -0x1c);
        }
        FUN_50c0edfb(piVar9,uVar11);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (*(int **)(unaff_EBP + -0x1c) != (int *)0x0) {
          FUN_50c02a85(*(int **)(unaff_EBP + -0x1c));
          *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        }
        iVar6 = *this;
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        iVar6 = (**(code **)(iVar6 + 0x18))(unaff_EBP + -0x14,4);
        if (iVar6 != 4) {
          *(undefined4 *)(unaff_EBP + 8) = 0x26;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + 8),(ThrowInfo *)&DAT_50c15658);
        }
        if (piVar9[8] != 0) {
          uVar11 = (**(code **)(*piVar9 + 0x24))();
          *(undefined4 *)(unaff_EBP + -0x14) = uVar11;
        }
        piVar12 = (int *)(*(int *)(unaff_EBP + -0x10) + 8);
        iVar6 = *piVar12;
        *(undefined4 *)(unaff_EBP + -0x20) = 0;
        if (iVar6 != 0) {
          iVar6 = FUN_50c0c812((void *)(unaff_EBP + -0x20),piVar12);
          if ((iVar6 < 0) && (iVar6 != -0x7fffbffe)) {
            FUN_50c101c4(iVar6);
          }
        }
        *(undefined1 *)(unaff_EBP + -4) = 5;
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          FUN_50c061b4((void *)(unaff_EBP + -0x68),0x80004002,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x68),(ThrowInfo *)&DAT_50c14eb0);
        }
        *(int *)(unaff_EBP + -0x38) = *(int *)(unaff_EBP + -0x20);
        iVar6 = PcSerializeObject();
        if (iVar6 < 0) {
          FUN_50c061b4((void *)(unaff_EBP + -0x78),iVar6,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x78),(ThrowInfo *)&DAT_50c14eb0);
        }
        if (piVar9[8] != 0) {
          uVar11 = (**(code **)(*piVar9 + 0x24))();
          *(undefined4 *)(unaff_EBP + 8) = uVar11;
          (**(code **)(*piVar9 + 0x28))(*(int *)(unaff_EBP + -0x14) + -4,0);
          *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 8) - *(int *)(unaff_EBP + -0x14);
          iVar6 = (**(code **)(*this + 0x18))(unaff_EBP + -0x14,4);
          if (iVar6 != 4) {
            *(undefined4 *)(unaff_EBP + -0x18) = 0x26;
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((void *)(unaff_EBP + -0x18),(ThrowInfo *)&DAT_50c15658);
          }
          (**(code **)(*piVar9 + 0x28))(*(undefined4 *)(unaff_EBP + 8),0);
        }
        if (*(undefined4 **)(unaff_EBP + -0x24) == (undefined4 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = **(undefined4 **)(unaff_EBP + -0x24);
        }
        FUN_50c0edfb(piVar9,uVar11);
        piVar9 = *(int **)(unaff_EBP + -0x20);
        *(undefined1 *)(unaff_EBP + -4) = 3;
        if (piVar9 != (int *)0x0) {
          (**(code **)(*piVar9 + 8))(piVar9);
        }
        piVar9 = *(int **)(unaff_EBP + -0x24);
      }
      else {
        iVar6 = *this;
        *(undefined4 *)(unaff_EBP + -0x30) = 0;
        iVar6 = (**(code **)(iVar6 + 0x14))(unaff_EBP + -0x30,4);
        if (iVar6 != 4) {
          *(undefined4 *)(unaff_EBP + 8) = 0x26;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + 8),(ThrowInfo *)&DAT_50c15658);
        }
        if (piVar9[8] != 0) {
          puVar5 = *(undefined2 **)(unaff_EBP + -0x10);
          *puVar5 = 0;
          if (*(undefined4 **)piVar9[9] == (undefined4 *)0x0) {
            uVar11 = 0;
          }
          else {
            uVar11 = **(undefined4 **)piVar9[9];
          }
          FUN_50c0aa94((void *)piVar9[10],uVar11,(int *)piVar9[8],*(int *)(unaff_EBP + -0x30));
          *(undefined2 *)(unaff_EBP + -0x18) = *puVar5;
          goto LAB_50c0d88b;
        }
        FUN_50c0edcd(piVar9,unaff_EBP + 8);
        puVar4 = *(undefined4 **)piVar9[9];
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (puVar4 == (undefined4 *)0x0) {
          pvVar10 = (void *)0x0;
        }
        else {
          pvVar10 = (void *)*puVar4;
        }
        if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
          pvVar13 = (void *)0x0;
        }
        else {
          pvVar13 = (void *)**(undefined4 **)(unaff_EBP + 8);
        }
        FUN_50c0d8a4(pvVar13,pvVar10);
        FUN_50c05e8d();
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (*(undefined4 **)(unaff_EBP + -0x28) == (undefined4 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = **(undefined4 **)(unaff_EBP + -0x28);
        }
        FUN_50c0edfb(piVar9,uVar11);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_50c02a72((undefined4 *)(unaff_EBP + -0x28));
        *(undefined4 *)(unaff_EBP + -0x2c) = 0;
        iVar6 = PcSerializeObject();
        if (iVar6 < 0) {
          FUN_50c061b4((void *)(unaff_EBP + -0x58),iVar6,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x58),(ThrowInfo *)&DAT_50c14eb0);
        }
        *(undefined4 *)(*(int *)(unaff_EBP + -0x10) + 8) = *(undefined4 *)(unaff_EBP + -0x2c);
        if (*(undefined4 **)(unaff_EBP + 8) == (undefined4 *)0x0) {
          uVar11 = 0;
        }
        else {
          uVar11 = **(undefined4 **)(unaff_EBP + 8);
        }
        FUN_50c0edfb(piVar9,uVar11);
        piVar9 = *(int **)(unaff_EBP + 8);
      }
      if (piVar9 != (int *)0x0) {
        FUN_50c02a85(piVar9);
      }
      goto LAB_50c0d88b;
    }
    if (uVar2 < 0x10) {
LAB_50c0d486:
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        **(undefined2 **)(unaff_EBP + -0x10) = 0;
      }
      FUN_50c061b4((void *)(unaff_EBP + -0x48),0x80020008,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x48),(ThrowInfo *)&DAT_50c14eb0);
    }
    if ((0x11 < uVar2) && (uVar2 != 0x12)) {
      if (uVar2 != 0x13) goto LAB_50c0d486;
      goto LAB_50c0d579;
    }
  }
  FUN_50c0b831(this,*(int *)(unaff_EBP + -0x10) + 8);
LAB_50c0d88b:
  **(undefined2 **)(unaff_EBP + -0x10) = *(undefined2 *)(unaff_EBP + -0x18);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


