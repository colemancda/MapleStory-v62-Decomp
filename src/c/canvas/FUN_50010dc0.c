/* FUN_50010dc0 - 0x50010dc0 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_50010dc0(void)

{
  uint *puVar1;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *this;
  undefined4 uVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *extraout_ECX;
  int unaff_EBP;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  
  FUN_50012d80();
  *(undefined1 *)(unaff_EBP + -0xd) = 0;
  iVar8 = *(int *)(unaff_EBP + 0xc);
  if (iVar8 == 0) {
    (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
  }
  else {
    (**(code **)(**(int **)(unaff_EBP + 8) + 4))(unaff_EBP + -0xd,1);
  }
  if (*(char *)(unaff_EBP + -0xd) != '\0') {
    *(undefined4 *)(unaff_EBP + 0x10) = 0x570;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + 0x10),(ThrowInfo *)&DAT_50016da8);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 *)(unaff_EBP + -0x48) = 0;
  *(undefined ***)(unaff_EBP + -0x4c) = &PTR_FUN_50015650;
  FUN_50011f0e((void *)(unaff_EBP + -0x4c),*(ZIStream **)(unaff_EBP + 8),(uint)(iVar8 == 0),
               *(int *)(unaff_EBP + 0x10),iVar8 - 1,-1);
  *(int *)(unaff_EBP + -0x20) = extraout_ECX[0xc];
  *(int *)(unaff_EBP + -0x2c) = extraout_ECX[0xd];
  *(int *)(unaff_EBP + -0x24) = extraout_ECX[10];
  *(int *)(unaff_EBP + -0x30) = extraout_ECX[0xb];
  *(int *)(unaff_EBP + -0x28) = extraout_ECX[0xe];
  iVar8 = extraout_ECX[0x10];
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (iVar8 != 0) {
    for (iVar8 = *(int *)(iVar8 + -4); iVar8 != 0; iVar8 = iVar8 + -1) {
      piVar3 = *(int **)(extraout_ECX[0x10] + -4 + iVar8 * 4);
      *(int **)(unaff_EBP + -0x1c) = piVar3;
      piVar3 = FUN_5000d372(piVar3);
      if ((piVar3 != (int *)extraout_ECX[7]) ||
         (piVar3 = FUN_5000d34b(*(int **)(unaff_EBP + -0x1c)), piVar3 != (int *)extraout_ECX[6])) {
        *(undefined4 *)(unaff_EBP + -0x18) = 0;
        uVar12 = 0;
        iVar11 = 0;
        iVar8 = extraout_ECX[0xb];
        iVar10 = extraout_ECX[10];
        *(undefined1 *)(unaff_EBP + -4) = 2;
        iVar7 = extraout_ECX[7];
        iVar9 = extraout_ECX[6];
        pvVar4 = (void *)FUN_5000c87a((void *)(unaff_EBP + -0x18));
        FUN_50004c13(pvVar4,iVar9,iVar7,iVar10,iVar8,iVar11,uVar12);
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
        *(undefined1 *)(unaff_EBP + -4) = 3;
        iVar8 = FUN_50005ffb((void *)(unaff_EBP + -0x14));
        *(int *)(iVar8 + 0x28) = extraout_ECX[10];
        *(int *)(iVar8 + 0x2c) = extraout_ECX[0xb];
        *(int *)(unaff_EBP + -0x2c) = iVar8;
        if (*(int *)(unaff_EBP + -0x14) == 0) {
          FUN_50012c97(0x80004003);
        }
        piVar3 = *(int **)(unaff_EBP + -0x14);
        iVar8 = (**(code **)(*piVar3 + 0x30))(piVar3,0,0,*(undefined4 *)(unaff_EBP + -0x18));
        if (iVar8 < 0) {
          FUN_50012ca5(iVar8,piVar3,&DAT_50018368);
        }
        if (*(int *)(unaff_EBP + 0xc) == 0) {
          FUN_50011e99((short *)(unaff_EBP + -0x5c));
          piVar3 = *(int **)(unaff_EBP + -0x14);
          *(undefined1 *)(unaff_EBP + -4) = 4;
          if (piVar3 == (int *)0x0) {
            FUN_50012c97(0x80004003);
            piVar3 = *(int **)(unaff_EBP + -0x14);
          }
          iVar8 = *piVar3;
          *(int **)(unaff_EBP + -0x30) = piVar3;
          iVar8 = (**(code **)(iVar8 + 0x80))
                            (piVar3,0,0,extraout_ECX,*(undefined4 *)(unaff_EBP + -0x5c),
                             *(undefined4 *)(unaff_EBP + -0x58),*(undefined4 *)(unaff_EBP + -0x54),
                             *(undefined4 *)(unaff_EBP + -0x50));
          if (iVar8 < 0) {
            FUN_50012ca5(iVar8,*(int **)(unaff_EBP + -0x30),&DAT_50018368);
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iVar8 = FUN_5000630c((short *)(unaff_EBP + -0x5c));
          if (iVar8 < 0) {
            FUN_50012c97(iVar8);
          }
        }
        FUN_50010dc0();
        if (*(int *)(unaff_EBP + 0xc) != 0) {
          FUN_50011e99((short *)(unaff_EBP + -0x5c));
          iVar8 = *extraout_ECX;
          *(undefined1 *)(unaff_EBP + -4) = 5;
          iVar8 = (**(code **)(iVar8 + 0x80))
                            (extraout_ECX,0,0,*(undefined4 *)(unaff_EBP + -0x14),
                             *(undefined4 *)(unaff_EBP + -0x5c),*(undefined4 *)(unaff_EBP + -0x58),
                             *(undefined4 *)(unaff_EBP + -0x54),*(undefined4 *)(unaff_EBP + -0x50));
          if (iVar8 < 0) {
            FUN_50012ca5(iVar8,extraout_ECX,&DAT_50018368);
          }
          *(undefined1 *)(unaff_EBP + -4) = 3;
          iVar8 = FUN_5000630c((short *)(unaff_EBP + -0x5c));
          if (iVar8 < 0) {
            FUN_50012c97(iVar8);
          }
        }
        piVar3 = *(int **)(unaff_EBP + -0x14);
        *(undefined1 *)(unaff_EBP + -4) = 2;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        piVar3 = *(int **)(unaff_EBP + -0x18);
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 8))(piVar3);
        }
        *(undefined ***)(unaff_EBP + -0x4c) = &PTR_FUN_50015650;
        *(undefined4 *)(unaff_EBP + -4) = 6;
        goto LAB_50011284;
      }
    }
  }
  *(uint *)(unaff_EBP + -0x38) = extraout_ECX[6] & 0xff;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  if (*(int *)(unaff_EBP + -0x30) != 0) {
    do {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      FUN_5001190a((void *)(unaff_EBP + -0x14),*(uint *)(unaff_EBP + -0x28));
      *(undefined1 *)(unaff_EBP + -4) = 7;
      *(undefined4 *)(unaff_EBP + 0x10) = 0;
      if (*(int *)(unaff_EBP + -0x24) != 0) {
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
        *(uint *)(unaff_EBP + -0x3c) = (*(int *)(unaff_EBP + 0xc) != 0) + 1;
        do {
          this = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)
                 (*(int *)(unaff_EBP + -0x1c) + *(int *)(unaff_EBP + -0x14));
          piVar3 = FUN_5000b54d();
          _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=(this,(IBinding *)*piVar3);
          piVar3 = *(int **)(unaff_EBP + -0x34);
          if (piVar3 != (int *)0x0) {
            (**(code **)(*piVar3 + 8))(piVar3);
          }
          if (*(int *)this == 0) {
            FUN_50012c97(0x80004003);
          }
          pvVar4 = FUN_5000d3e7(*(void **)this,(void *)(unaff_EBP + -0x5c),this + 8);
          *(undefined4 *)(this + 4) = *(undefined4 *)((int)pvVar4 + 8);
          iVar8 = FUN_5000630c((short *)(unaff_EBP + -0x5c));
          if (iVar8 < 0) {
            FUN_50012c97(iVar8);
          }
          if (*(int *)(this + 4) == 0) {
            iVar8 = 0;
          }
          else {
            uVar6 = *(int *)(unaff_EBP + -0x24) - *(int *)(unaff_EBP + 0x10);
            if (*(uint *)(unaff_EBP + -0x20) <= uVar6) {
              uVar6 = *(uint *)(unaff_EBP + -0x20);
            }
            iVar8 = ((1 << ((byte)extraout_ECX[7] & 0x1f)) + -1 + uVar6 >>
                    ((byte)extraout_ECX[7] & 0x1f)) <<
                    ((byte)*(undefined4 *)(unaff_EBP + -0x38) & 0x1f);
          }
          *(int *)(this + 0x20) = iVar8;
          iVar8 = *(int *)(unaff_EBP + -0x3c);
          *(int *)(this + 0xc) = iVar8;
          if (iVar8 == 2) {
            if (*(int *)this == 0) {
              FUN_50012c97(0x80004003);
            }
            iVar8 = *(int *)this;
            *(int *)(unaff_EBP + -0x40) = iVar8;
            if (iVar8 == 0) {
              FUN_50012c97(0x80004003);
            }
            *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)this;
            piVar3 = FUN_5000d3c0(*(int **)(unaff_EBP + -0x40));
            piVar5 = FUN_5000d399(*(int **)(unaff_EBP + -0x44));
            (*DAT_50081c5c)(this + 0x10,0,0,piVar5,piVar3);
          }
          uVar6 = *(int *)(unaff_EBP + 0x10) + *(int *)(unaff_EBP + -0x20);
          *(int *)(unaff_EBP + -0x1c) = *(int *)(unaff_EBP + -0x1c) + 0x24;
          *(uint *)(unaff_EBP + 0x10) = uVar6;
        } while (uVar6 < *(uint *)(unaff_EBP + -0x24));
      }
      uVar6 = *(int *)(unaff_EBP + -0x30) - *(int *)(unaff_EBP + -0x18);
      if (*(uint *)(unaff_EBP + -0x2c) <= uVar6) {
        uVar6 = *(uint *)(unaff_EBP + -0x2c);
      }
      uVar6 = ((1 << ((byte)extraout_ECX[7] & 0x1f)) + -1 + uVar6 >> ((byte)extraout_ECX[7] & 0x1f))
              / (((extraout_ECX[6] != 0x402) - 1 & 3) + 1);
      *(uint *)(unaff_EBP + -0x1c) = uVar6;
      while (uVar6 != 0) {
        iVar8 = 0;
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        if (*(int *)(unaff_EBP + -0x28) != 0) {
          do {
            iVar10 = iVar8 + *(int *)(unaff_EBP + -0x14);
            uVar12 = *(undefined4 *)(iVar10 + 0x20);
            if (*(int *)(unaff_EBP + 0xc) == 0) {
              uVar2 = *(undefined4 *)(iVar10 + 4);
              *(undefined4 *)(unaff_EBP + -0x44) = uVar12;
              iVar7 = (**(code **)(*(int *)(unaff_EBP + -0x4c) + 0x18))(uVar2,uVar12);
              if (*(int *)(unaff_EBP + -0x44) != iVar7) {
                *(undefined4 *)(unaff_EBP + 0xc) = 0x26;
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((void *)(unaff_EBP + 0xc),(ThrowInfo *)&DAT_50016da8);
              }
            }
            else {
              uVar2 = *(undefined4 *)(iVar10 + 4);
              *(undefined4 *)(unaff_EBP + -0x44) = uVar12;
              iVar7 = (**(code **)(*(int *)(unaff_EBP + -0x4c) + 0x14))(uVar2,uVar12);
              if (*(int *)(unaff_EBP + -0x44) != iVar7) {
                *(undefined4 *)(unaff_EBP + 0xc) = 0x26;
                    /* WARNING: Subroutine does not return */
                _CxxThrowException((void *)(unaff_EBP + 0xc),(ThrowInfo *)&DAT_50016da8);
              }
            }
            *(int *)(iVar10 + 4) = *(int *)(iVar10 + 4) + *(int *)(iVar10 + 8);
            *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x10) + 1;
            iVar8 = iVar8 + 0x24;
          } while (*(uint *)(unaff_EBP + 0x10) < *(uint *)(unaff_EBP + -0x28));
        }
        puVar1 = (uint *)(unaff_EBP + -0x1c);
        *puVar1 = *puVar1 - 1;
        uVar6 = *puVar1;
      }
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_5001186e((uint *)(unaff_EBP + -0x14));
      uVar6 = *(int *)(unaff_EBP + -0x18) + *(int *)(unaff_EBP + -0x2c);
      *(uint *)(unaff_EBP + -0x18) = uVar6;
    } while (uVar6 < *(uint *)(unaff_EBP + -0x30));
  }
  if (extraout_ECX[6] == 0x402) {
    iVar8 = *extraout_ECX;
    *(undefined1 *)(unaff_EBP + -4) = 8;
    *(undefined4 *)(unaff_EBP + 0xc) = 0;
    (**(code **)(iVar8 + 0x24))(extraout_ECX,unaff_EBP + 0xc);
    piVar3 = *(int **)(unaff_EBP + 0xc);
    piVar5 = (int *)0x0;
    if (piVar3 != (int *)0x0) {
      *(undefined4 *)(unaff_EBP + 8) = 0x402;
      iVar8 = (**(code **)(*piVar3 + 0x10))(piVar3,extraout_ECX,unaff_EBP + 8);
      if (iVar8 < 0) {
        FUN_50012ca5(iVar8,piVar3,&DAT_500194f0);
      }
      extraout_ECX[6] = *(int *)(unaff_EBP + 8);
      piVar5 = *(int **)(unaff_EBP + 0xc);
    }
    *(undefined1 *)(unaff_EBP + -4) = 1;
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
    }
  }
  *(undefined ***)(unaff_EBP + -0x4c) = &PTR_FUN_50015650;
  *(undefined4 *)(unaff_EBP + -4) = 9;
LAB_50011284:
  if (*(int *)(unaff_EBP + -0x48) != 0) {
    ZLZCloseFilter(*(ZIStream **)(unaff_EBP + -0x48));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


