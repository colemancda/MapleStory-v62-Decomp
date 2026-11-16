/* FUN_50c0a6bf - 0x50c0a6bf in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


void FUN_50c0a6bf(void)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  void *this;
  undefined2 *puVar4;
  int *piVar5;
  size_t *psVar6;
  int iVar7;
  undefined4 uVar8;
  int unaff_EBP;
  int *this_00;
  
  FUN_50c10270();
  piVar5 = *(int **)(unaff_EBP + 0xc);
  this_00 = (int *)(-(uint)(piVar5 != (int *)0x0) & (uint)(piVar5 + 1));
  uVar3 = this_00[2];
  *(uint *)(unaff_EBP + -0x10) = uVar3 & 0x10;
  if ((uVar3 & 0x10) != 0) {
    FUN_50c0aa71(*(int *)(unaff_EBP + 8));
  }
  puVar4 = (undefined2 *)FUN_50c0ab6e(*(int *)(unaff_EBP + 8));
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    uVar1 = *puVar4;
    *(char *)(unaff_EBP + 0xf) = (char)uVar1;
    *(uint *)(unaff_EBP + -0x14) = CONCAT22((short)((uint)puVar4 >> 0x10),uVar1);
    FUN_50c08a3c(this_00,unaff_EBP + 0xf,1);
  }
  else {
    FUN_50c08a10(this_00,unaff_EBP + 0xf,1);
    if (*(char *)(unaff_EBP + 0xf) == '\t') {
      *(undefined4 *)(unaff_EBP + -0x14) = 0xd;
    }
    else {
      *(ushort *)(unaff_EBP + -0x14) = (ushort)*(byte *)(unaff_EBP + 0xf);
    }
  }
  uVar2 = *(ushort *)(unaff_EBP + -0x14);
  if (uVar2 < 9) {
    if (uVar2 == 8) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        FUN_50c064e3();
      }
      else {
        FUN_50c08a10(this_00,unaff_EBP + 0xb,1);
        piVar5 = (int *)FUN_50c06dac();
        *(undefined4 *)(unaff_EBP + -4) = 0;
        psVar6 = FUN_50c085fa(piVar5);
        piVar5 = *(int **)(unaff_EBP + -0x1c);
        *(size_t **)(puVar4 + 4) = psVar6;
        if (piVar5 != (int *)0x0) {
          FUN_50c02a85(piVar5);
        }
      }
      goto LAB_50c0aa59;
    }
    if (uVar2 == 0) goto LAB_50c0aa59;
    if (uVar2 != 2) {
      if (uVar2 < 3) goto LAB_50c0a77d;
      if (4 < uVar2) {
        if (uVar2 != 5) {
          if (uVar2 == 6) {
            if ((*(byte *)(this_00 + 2) & 8) == 0) {
              FUN_50c0c1a9(this_00,(int *)(puVar4 + 4));
            }
            else {
              FUN_50c0c215(this_00,*(uint *)(puVar4 + 4),*(uint *)(puVar4 + 6));
            }
            goto LAB_50c0aa59;
          }
          if (uVar2 != 7) goto LAB_50c0a77d;
        }
        FUN_50c0b8cb(this_00,(undefined8 *)(puVar4 + 4));
        goto LAB_50c0aa59;
      }
LAB_50c0a86e:
      if ((*(byte *)(this_00 + 2) & 8) == 0) {
        FUN_50c0c0ab(this_00,(int *)(puVar4 + 4));
      }
      else {
        FUN_50c0c113(this_00,*(int *)(puVar4 + 4));
      }
      goto LAB_50c0aa59;
    }
  }
  else if (uVar2 != 0xb) {
    if (uVar2 == 0xd) {
      if (*(int *)(unaff_EBP + -0x10) == 0) {
        *(undefined4 *)(unaff_EBP + -0x10) = 0;
        iVar7 = (**(code **)(*this_00 + 0x18))(unaff_EBP + -0x10,4);
        if (iVar7 != 4) {
          *(undefined4 *)(unaff_EBP + 8) = 0x26;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + 8),(ThrowInfo *)&DAT_50c15658);
        }
        if (piVar5[8] != 0) {
          uVar8 = (**(code **)(*piVar5 + 0x24))();
          *(undefined4 *)(unaff_EBP + -0x10) = uVar8;
        }
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        if (*(int *)(puVar4 + 4) != 0) {
          iVar7 = FUN_50c0c812((void *)(unaff_EBP + -0x18),(int *)(puVar4 + 4));
          if ((iVar7 < 0) && (iVar7 != -0x7fffbffe)) {
            FUN_50c101c4(iVar7);
          }
        }
        *(undefined4 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x18) == 0) {
          FUN_50c061b4((void *)(unaff_EBP + -0x54),0x80004002,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -0x54),(ThrowInfo *)&DAT_50c14eb0);
        }
        *(int *)(unaff_EBP + -0x20) = *(int *)(unaff_EBP + -0x18);
        iVar7 = PcSerializeObject();
        if (iVar7 < 0) {
          FUN_50c061b4((void *)(unaff_EBP + -100),iVar7,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + -100),(ThrowInfo *)&DAT_50c14eb0);
        }
        if (piVar5[8] != 0) {
          uVar8 = (**(code **)(*piVar5 + 0x24))();
          *(undefined4 *)(unaff_EBP + 8) = uVar8;
          (**(code **)(*piVar5 + 0x28))(*(int *)(unaff_EBP + -0x10) + -4,0);
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + 8) - *(int *)(unaff_EBP + -0x10);
          iVar7 = (**(code **)(*this_00 + 0x18))(unaff_EBP + -0x10,4);
          if (iVar7 != 4) {
            *(undefined4 *)(unaff_EBP + -0x24) = 0x26;
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((void *)(unaff_EBP + -0x24),(ThrowInfo *)&DAT_50c15658);
          }
          (**(code **)(*piVar5 + 0x28))(*(undefined4 *)(unaff_EBP + 8),0);
        }
        piVar5 = *(int **)(unaff_EBP + -0x18);
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (piVar5 != (int *)0x0) {
          (**(code **)(*piVar5 + 8))(piVar5);
        }
      }
      else {
        *(undefined4 *)(unaff_EBP + 0xc) = 0;
        iVar7 = (**(code **)(*this_00 + 0x14))(unaff_EBP + 0xc,4);
        if (iVar7 != 4) {
          *(undefined4 *)(unaff_EBP + 8) = 0x26;
                    /* WARNING: Subroutine does not return */
          _CxxThrowException((void *)(unaff_EBP + 8),(ThrowInfo *)&DAT_50c15658);
        }
        if (piVar5[8] == 0) {
          *(undefined4 *)(unaff_EBP + 8) = 0;
          iVar7 = PcSerializeObject();
          if (iVar7 < 0) {
            FUN_50c061b4((void *)(unaff_EBP + -0x44),iVar7,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
            _CxxThrowException((void *)(unaff_EBP + -0x44),(ThrowInfo *)&DAT_50c14eb0);
          }
          *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(unaff_EBP + 8);
        }
        else {
          iVar7 = *(int *)(unaff_EBP + 0xc);
          this = *(void **)(unaff_EBP + 8);
          *puVar4 = 0;
          FUN_50c0aa94(this,0,(int *)piVar5[8],iVar7);
          *(undefined2 *)(unaff_EBP + -0x14) = *puVar4;
        }
      }
      goto LAB_50c0aa59;
    }
    if (uVar2 < 0x10) {
LAB_50c0a77d:
      if (*(int *)(unaff_EBP + -0x10) != 0) {
        *puVar4 = 0;
      }
      FUN_50c061b4((void *)(unaff_EBP + -0x34),0x80020008,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
      _CxxThrowException((void *)(unaff_EBP + -0x34),(ThrowInfo *)&DAT_50c14eb0);
    }
    if ((0x11 < uVar2) && (uVar2 != 0x12)) {
      if (uVar2 != 0x13) goto LAB_50c0a77d;
      goto LAB_50c0a86e;
    }
  }
  FUN_50c0b831(this_00,puVar4 + 4);
LAB_50c0aa59:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *puVar4 = *(undefined2 *)(unaff_EBP + -0x14);
  return;
}


