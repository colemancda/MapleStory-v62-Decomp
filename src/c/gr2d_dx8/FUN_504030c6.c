/* FUN_504030c6 - 0x504030c6 in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


int FUN_504030c6(void)

{
  int *piVar1;
  uint *puVar2;
  UINT *pUVar3;
  byte bVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  int iVar8;
  undefined4 uVar9;
  undefined3 extraout_var;
  MMRESULT MVar10;
  int unaff_EBP;
  uint uVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  wchar_t *pwVar14;
  
  FUN_5042a430();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff18;
  if ((*(int *)(unaff_EBP + 0xc) != 0) && (*(int *)(unaff_EBP + 0x10) != 0)) {
    bVar4 = *(byte *)(unaff_EBP + 0x15);
    iVar5 = *(int *)(unaff_EBP + 8);
    uVar9 = *(undefined4 *)(unaff_EBP + 0x1c);
    *(undefined4 *)(iVar5 + 0x98) = uVar9;
    if ((bVar4 & 0x40) != 0) {
      iVar8 = (*DAT_50438d38)(uVar9);
      if (iVar8 != 0) {
        uVar9 = FUN_5040356d(unaff_EBP + 0x34,0);
        puVar12 = (undefined4 *)(iVar5 + 0x14);
        *(undefined4 *)(iVar5 + 0x9c) = uVar9;
        *(undefined4 *)(unaff_EBP + -4) = 0;
        *(undefined4 **)(unaff_EBP + 8) = puVar12;
        *(undefined4 **)(unaff_EBP + 0x20) = puVar12;
        FUN_50401895();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_5040356d(unaff_EBP + 0x24,0xffffffff);
        if (*(int *)(iVar5 + 0x90) == 0) {
          if (*(int *)(iVar5 + 0x1c) != 0) {
            bVar7 = FUN_50402e0e();
            if (CONCAT31(extraout_var,bVar7) != 0) {
              if (*(int *)(iVar5 + 0x78) == 0) {
                *(undefined4 *)(iVar5 + 0x8c) = 0xffffffff;
              }
              else {
                *(undefined4 *)(iVar5 + 0x8c) = 0;
              }
              puVar12 = *(undefined4 **)(unaff_EBP + 8);
              *(undefined1 *)(unaff_EBP + -4) = 0;
              piVar1 = puVar12 + 1;
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                *puVar12 = 0;
              }
              FUN_50403dd1(iVar5);
              uVar11 = -(uint)(iVar5 != -0x20) & iVar5 + 0x30U;
              *(undefined4 *)(iVar5 + 0x90) = 0;
              iVar8 = (**(code **)(**(int **)(iVar5 + 0x1c) + 0x3c))
                                (*(int **)(iVar5 + 0x1c),0,1,*(undefined4 *)(iVar5 + 0x98),0x46,
                                 uVar11,(undefined4 *)(iVar5 + 0x90));
              if (iVar8 < 0) {
                iVar8 = (**(code **)(**(int **)(iVar5 + 0x1c) + 0x3c))
                                  (*(int **)(iVar5 + 0x1c),0,1,*(undefined4 *)(iVar5 + 0x98),0x26,
                                   uVar11,iVar5 + 0x90);
                if (iVar8 < 0) goto LAB_5040355c;
              }
              if (*(int *)(iVar5 + 0x28) == 0) {
                *(undefined4 *)(iVar5 + 0x28) = 0x3c;
              }
              piVar6 = *(int **)(iVar5 + 0xa8);
              piVar1 = (int *)(iVar5 + 0xa8);
              if (piVar6 != (int *)0x0) {
                (**(code **)(*piVar6 + 8))(piVar6);
              }
              *piVar1 = 0;
              if (DAT_50438fac == 0) {
                FUN_50401c7b();
              }
              if (DAT_50438f98 == (code *)0x0) {
                iVar8 = -0x7ffbfe10;
              }
              else {
                iVar8 = (*DAT_50438f98)(u_Canvas_50435378,&DAT_50435388,piVar1,0);
                if (-1 < iVar8) {
                  piVar6 = *(int **)(iVar5 + 0xac);
                  if (piVar6 != (int *)0x0) {
                    (**(code **)(*piVar6 + 8))(piVar6);
                  }
                  *(undefined4 *)(iVar5 + 0xac) = 0;
                  if (*piVar1 == 0) {
                    FUN_5042a358(0x80004003);
                  }
                  iVar8 = (**(code **)(*(int *)*piVar1 + 0x24))((int *)*piVar1,iVar5 + 0xac);
                  if (-1 < iVar8) {
                    if (*piVar1 == 0) {
                      FUN_5042a358(0x80004003);
                    }
                    iVar8 = (**(code **)(*(int *)*piVar1 + 0x28))
                                      ((int *)*piVar1,-(uint)(iVar5 != 0) & iVar5 + 4U);
                    if (-1 < iVar8) {
                      iVar8 = (**(code **)(**(int **)(iVar5 + 0x90) + 0x1c))
                                        (*(int **)(iVar5 + 0x90),unaff_EBP + -0xe8);
                      if (-1 < iVar8) {
                        *(uint *)(iVar5 + 0x268) = *(uint *)(unaff_EBP + -0xac) & 0x20;
                        puVar2 = (uint *)(iVar5 + 0x26c);
                        *puVar2 = 0x100;
                        while (*(uint *)(unaff_EBP + -0x90) < *puVar2) {
                          *puVar2 = *puVar2 >> 1;
                        }
                        puVar2 = (uint *)(iVar5 + 0x270);
                        *puVar2 = 0x100;
                        while (*(uint *)(unaff_EBP + -0x8c) < *puVar2) {
                          *puVar2 = *puVar2 >> 1;
                        }
                      }
                      FUN_50408c81(iVar5);
                      pUVar3 = (UINT *)(iVar5 + 0xa4);
                      *pUVar3 = 0;
                      do {
                        *pUVar3 = *pUVar3 + 1;
                        MVar10 = timeBeginPeriod(*pUVar3);
                      } while (MVar10 != 0);
                      *(undefined4 *)(iVar5 + 0x32c) = 1;
                      *(undefined4 *)(iVar5 + 0x330) = 1;
                      *(undefined4 *)(iVar5 + 0x334) = 1;
                      uVar9 = (*DAT_50438e0c)();
                      *(undefined4 *)(iVar5 + 0x324) = uVar9;
                      *(undefined4 *)(iVar5 + 0x358) = uVar9;
                      *(undefined4 *)(iVar5 + 0x328) = uVar9;
                      uVar13 = __alldiv(*(uint *)(iVar5 + 0x338),*(uint *)(iVar5 + 0x33c),
                                        *(uint *)(iVar5 + 0x28),0);
                      *(undefined8 *)(iVar5 + 0x340) = uVar13;
                      (*DAT_50438c04)((undefined4 *)(iVar5 + 0x348));
                      *(undefined4 *)(iVar5 + 0x350) = *(undefined4 *)(iVar5 + 0x348);
                      *(undefined4 *)(iVar5 + 0x368) = 0;
                      *(undefined4 *)(iVar5 + 0x354) = *(undefined4 *)(iVar5 + 0x34c);
                      *(undefined4 *)(iVar5 + 0x360) = 0;
                      *(undefined4 *)(iVar5 + 0x364) = 0;
                      *(undefined4 *)(iVar5 + 0x36c) = 0;
                      *(undefined4 *)(iVar5 + 0x370) = 0;
                      *(undefined4 *)(iVar5 + 0x374) = 0;
                      *(undefined4 *)(iVar5 + 0x378) = 0;
                      *(undefined4 *)(iVar5 + 0x37c) = 0;
                      *(undefined4 *)(iVar5 + 0x380) = 1;
                      if (*(int *)(iVar5 + 0xc0) == 0) {
                        FUN_5042a358(0x80004003);
                      }
                      (**(code **)(**(int **)(iVar5 + 0xc0) + 0x5c))
                                (*(int **)(iVar5 + 0xc0),*(undefined4 *)(iVar5 + 0x328));
                      if (*(int *)(iVar5 + 0xd0) == 0) {
                        FUN_5042a358(0x80004003);
                      }
                      (**(code **)(**(int **)(iVar5 + 0xd0) + 0x24))(*(int **)(iVar5 + 0xd0),0xff);
                      if (*(int *)(iVar5 + 0xd4) == 0) {
                        FUN_5042a358(0x80004003);
                      }
                      (**(code **)(**(int **)(iVar5 + 0xd4) + 0x24))(*(int **)(iVar5 + 0xd4),0xff);
                      if (*(int *)(iVar5 + 0xd4) == 0) {
                        FUN_5042a358(0x80004003);
                      }
                      (**(code **)(**(int **)(iVar5 + 0xd4) + 0x2c))(*(int **)(iVar5 + 0xd4),0xff);
                      iVar8 = *(int *)(iVar5 + 0xc0);
                      *(undefined4 *)(unaff_EBP + 0x14) = DAT_50439040;
                      *(undefined4 *)(unaff_EBP + 0x18) = DAT_50439044;
                      *(undefined4 *)(unaff_EBP + 0x1c) = DAT_50439048;
                      *(undefined4 *)(unaff_EBP + 0x20) = DAT_5043904c;
                      if (iVar8 == 0) {
                        FUN_5042a358(0x80004003);
                      }
                      (**(code **)(**(int **)(iVar5 + 0xc0) + 0x8c))
                                (*(int **)(iVar5 + 0xc0),iVar5 + 0xc4,iVar5 + 200,0,0,0,0,0,0,
                                 *(undefined4 *)(unaff_EBP + 0x14),*(undefined4 *)(unaff_EBP + 0x18)
                                 ,*(undefined4 *)(unaff_EBP + 0x1c),
                                 *(undefined4 *)(unaff_EBP + 0x20));
                      *(uint *)(iVar5 + 0xc4) = ~*(uint *)(iVar5 + 0xc4);
                      *(uint *)(iVar5 + 200) = ~*(uint *)(iVar5 + 200);
                      (*DAT_50438c3c)(*(undefined4 *)(iVar5 + 0x98),5);
                      (*DAT_50438c38)(*(undefined4 *)(iVar5 + 0x98));
                      memset((undefined4 *)(iVar5 + 0xd8),0,0x50);
                      *(undefined4 *)(iVar5 + 0xd8) = *(undefined4 *)(iVar5 + 0x90);
                      (*DAT_50438d34)(0);
                      *(undefined4 *)(iVar5 + 0xa0) = 1;
                      iVar8 = 0;
                    }
                  }
                }
              }
              goto LAB_5040355c;
            }
            puVar12 = *(undefined4 **)(unaff_EBP + 8);
          }
          pwVar14 = u_Failed_in_finding_proper_screen_m_5043531c;
        }
        else {
          pwVar14 = u_Already_initialized_50435398;
        }
        FUN_504050cb(pwVar14,0);
        piVar1 = puVar12 + 1;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *puVar12 = 0;
        }
        iVar8 = -0x7fffbffb;
        goto LAB_5040355c;
      }
    }
  }
  iVar8 = -0x7ff8ffa9;
LAB_5040355c:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar8;
}


