/* FUN_50008f93 - 0x50008f93 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void __cdecl
FUN_50008f93(uint param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,uint *param_9,int param_10,int param_11,uint *param_12,int param_13,
            uint param_14,int param_15,int param_16,int param_17,ushort *param_18)

{
  ushort uVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int local_1c;
  uint *local_18;
  uint *local_10;
  uint *local_c;
  int local_8;
  
  iVar2 = param_11;
  uVar11 = 0;
  if (param_14 == 0) {
    return;
  }
  bVar8 = (byte)param_3;
  if (param_3 < 0) {
    bVar8 = -bVar8;
    iVar4 = 1 << (bVar8 & 0x1f);
    param_4 = iVar4 + -1 + param_4 >> (bVar8 & 0x1f);
    param_6 = iVar4 + -1 + param_6 >> (bVar8 & 0x1f);
  }
  else {
    iVar4 = 1 << (bVar8 & 0x1f);
    param_5 = iVar4 + -1 + param_5 >> (bVar8 & 0x1f);
    param_7 = iVar4 + -1 + param_7 >> (bVar8 & 0x1f);
  }
  bVar8 = (byte)param_11;
  local_1c = 1 << ((byte)param_8 & 0x1f);
  local_8 = 0;
  local_10 = param_12;
  if (param_16 != 0) {
    param_9 = (uint *)((param_1 - 1) * local_1c + (int)param_9);
    local_1c = -local_1c;
  }
  local_c = param_9;
  if (param_17 != 0) {
    local_c = (uint *)((int)param_9 + (param_2 + -1) * param_10);
    param_10 = -param_10;
  }
  param_9 = (uint *)0x0;
  if ((param_11 == 2) && (param_8 != 2)) {
    if (param_15 == 1) {
      FUN_50012e10();
      uVar7 = param_1;
      iVar4 = param_2;
      puVar12 = local_c;
      iVar13 = param_10;
      pvVar5 = (void *)FUN_5000a720((int)&stack0xffffffd0);
      FUN_5000a332(pvVar5,uVar7,iVar4,puVar12,iVar13);
    }
    else if (param_15 == 0x201) {
      FUN_50012e10();
      uVar7 = param_1;
      iVar4 = param_2;
      puVar12 = local_c;
      iVar13 = param_10;
      pvVar5 = (void *)FUN_5000a720((int)&stack0xffffffd0);
      FUN_5000a332(pvVar5,uVar7,iVar4,puVar12,iVar13);
    }
    else {
      if (param_15 == 0x1001) {
        FUN_50012e10();
        FUN_5000a705(&stack0xffffffd0);
      }
      else {
        if (param_15 != 0x1201) goto LAB_500090e8;
        FUN_50012e10();
        FUN_5000a705(&stack0xffffffd0);
      }
      param_9 = (uint *)&stack0xffffffd0;
    }
  }
LAB_500090e8:
  if (param_18 != (ushort *)0x0) {
    param_11 = 2;
  }
  param_17 = 0;
  if (0 < param_2) {
    do {
      for (; param_7 <= local_8; local_8 = local_8 - param_7) {
        local_10 = (uint *)((int)local_10 + param_13);
      }
      param_12 = (uint *)0x0;
      local_18 = (uint *)0x0;
      param_3 = 0;
      puVar12 = local_10;
      puVar10 = local_c;
      if (0 < (int)param_1) {
        do {
          for (; param_5 <= (int)param_12; param_12 = (uint *)((int)param_12 - param_5)) {
            puVar12 = (uint *)((int)puVar12 + (1 << (bVar8 & 0x1f)));
          }
          if (puVar12 != local_18) {
            if ((char)param_11 == '\x01') {
              uVar11 = (uint)(ushort)*puVar12;
            }
            else {
              uVar11 = *puVar12;
            }
            local_18 = puVar12;
            if (param_18 != (ushort *)0x0) {
              uVar11 = FUN_500096b1(uVar11,iVar2,param_18);
            }
          }
          if (param_9 == (uint *)0x0) {
            uVar3 = (ushort)uVar11;
            if (param_8 == 1) {
              if (param_11 == 1) {
                if (param_14 != 0xffffffff) {
                  if (param_14 == 0xff) {
                    uVar1 = (ushort)*puVar10;
                    if (((uVar11 & 0xf000) != 0xf000) && (uVar3 = uVar1, (uVar11 & 0xf000) != 0)) {
                      uVar7 = 0xff;
LAB_50009596:
                      uVar7 = FUN_5000836d((uint)uVar1,uVar11,uVar7);
                      uVar3 = (ushort)uVar7;
                    }
                  }
                  else {
                    if (param_14 != 0xfffffffe) {
                      uVar1 = (ushort)*puVar10;
                      uVar7 = param_14;
                      goto LAB_50009596;
                    }
                    uVar3 = FUN_50008463((ushort)*puVar10,uVar3);
                  }
                }
              }
              else if (param_11 == 2) {
                if (param_14 == 0xffffffff) {
LAB_50009516:
                  uVar7 = FUN_50004a0b(uVar11);
                  uVar3 = (ushort)uVar7;
                }
                else if (param_14 == 0xff) {
                  uVar3 = (ushort)*puVar10;
                  if ((uVar11 & 0xff000000) == 0xff000000) goto LAB_50009516;
                  if ((uVar11 & 0xff000000) != 0) {
                    uVar7 = 0xff;
                    goto LAB_5000954a;
                  }
                }
                else if (param_14 == 0xfffffffe) {
                  uVar7 = FUN_5000963c((ushort)*puVar10,uVar11);
                  uVar3 = (ushort)uVar7;
                }
                else {
                  uVar3 = (ushort)*puVar10;
                  uVar7 = param_14;
LAB_5000954a:
                  uVar7 = FUN_50008086((uint)uVar3,uVar11,uVar7);
                  uVar3 = (ushort)uVar7;
                }
              }
              else {
                if (param_11 != 0x201) goto LAB_5000959e;
                if ((param_14 == 0xffffffff) || (param_14 == 0xff)) {
                  uVar3 = (ushort)((((uVar11 & 0x780 | 0x780000) >> 3 | uVar11 & 0xf000) >> 3 |
                                   uVar11 & 0x1e) >> 1);
                }
                else if (param_14 == 0xfffffffe) {
                  uVar3 = 0;
                }
                else {
                  uVar7 = FUN_50008879((uint)(ushort)*puVar10,uVar11,param_14);
                  uVar3 = (ushort)uVar7;
                }
              }
LAB_5000959b:
              *(ushort *)puVar10 = uVar3;
            }
            else if (param_8 == 2) {
              if (param_11 == 1) {
                if (param_14 == 0xffffffff) {
LAB_5000943a:
                  uVar7 = FUN_500073e6(uVar11);
                }
                else if (param_14 == 0xff) {
                  uVar7 = *puVar10;
                  if ((uVar11 & 0xf000) == 0xf000) goto LAB_5000943a;
                  if ((uVar11 & 0xf000) != 0) {
                    uVar6 = 0xff;
                    goto LAB_50009491;
                  }
                }
                else if (param_14 == 0xfffffffe) {
                  uVar7 = *puVar10;
                  uVar6 = (uVar11 & 0xfffff000) << 4 | uVar11 & 0xf000;
                  uVar9 = uVar7 + uVar6 * -0x1000;
                  uVar7 = -(uint)(uVar6 * 0x1000 < uVar7) & ((uVar9 ^ uVar7) & 0xffffff ^ uVar9);
                }
                else {
                  uVar7 = *puVar10;
                  uVar6 = param_14;
LAB_50009491:
                  uVar7 = FUN_50007b8d(uVar7,uVar11,uVar6);
                }
              }
              else if (param_11 == 2) {
                uVar7 = uVar11;
                if (param_14 != 0xffffffff) {
                  if (param_14 == 0xff) {
                    uVar6 = *puVar10;
                    if (((uVar11 & 0xff000000) != 0xff000000) &&
                       (uVar7 = uVar6, (uVar11 & 0xff000000) != 0)) {
                      uVar7 = 0xff;
LAB_50009419:
                      uVar7 = FUN_500078f7(uVar6,uVar11,uVar7);
                    }
                  }
                  else {
                    if (param_14 != 0xfffffffe) {
                      uVar6 = *puVar10;
                      uVar7 = param_14;
                      goto LAB_50009419;
                    }
                    uVar7 = *puVar10;
                    uVar7 = -(uint)(uVar11 < uVar7) &
                            ((uVar7 - uVar11 ^ uVar7) & 0xffffff ^ uVar7 - uVar11);
                  }
                }
              }
              else {
                if (param_11 != 0x201) goto LAB_5000959e;
                if ((param_14 == 0xffffffff) || (param_14 == 0xff)) {
                  uVar7 = FUN_5000741d(uVar11);
                }
                else if (param_14 == 0xfffffffe) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = FUN_50008abb(*puVar10,uVar11,param_14);
                }
              }
              *puVar10 = uVar7;
            }
            else if (param_8 == 0x201) {
              if (param_11 == 1) {
                if (param_14 == 0xffffffff) {
LAB_50009340:
                  uVar7 = FUN_50008666(uVar11);
                  uVar3 = (ushort)uVar7;
                }
                else if (param_14 == 0xff) {
                  uVar3 = (ushort)*puVar10;
                  if (0x7fff < (uVar11 & 0xf000)) goto LAB_50009340;
                }
                else {
                  if (param_14 == 0xfffffffe) goto LAB_5000936c;
                  uVar7 = FUN_500086a6((uint)(ushort)*puVar10,uVar11,param_14);
                  uVar3 = (ushort)uVar7;
                }
                goto LAB_5000959b;
              }
              if (param_11 == 2) {
                if (param_14 == 0xffffffff) {
LAB_500092e7:
                  uVar3 = (ushort)(((uVar11 >> 3 & 0x1f0000 | uVar11 & 0xfc00) >> 2 | uVar11 & 0xf8)
                                  >> 3);
                }
                else {
                  if (param_14 == 0xff) {
                    if (0x7fffffff < (uVar11 & 0xff000000)) goto LAB_500092e7;
                  }
                  else if (param_14 != 0xfffffffe) {
                    uVar7 = FUN_5000965f((uint)(ushort)*puVar10,uVar11,param_14);
                    uVar3 = (ushort)uVar7;
                    goto LAB_5000959b;
                  }
LAB_5000936c:
                  uVar3 = (ushort)*puVar10;
                }
                goto LAB_5000959b;
              }
              if (param_11 == 0x201) {
                if ((param_14 == 0xffffffff) ||
                   (((param_14 != 0xff && (param_14 != 0xfffffffe)) && (0x7f < (int)param_14))))
                goto LAB_5000959b;
                goto LAB_5000936c;
              }
            }
          }
          else {
            uVar7 = uVar11;
            if (param_14 != 0xffffffff) {
              if (param_11 == 0x201) {
                uVar6 = FUN_5000741d((uint)(ushort)*puVar10);
              }
              else {
                uVar6 = FUN_500073e6((uint)(ushort)*puVar10);
              }
              if (param_14 == 0xff) {
                if (((uVar11 & 0xff000000) != 0xff000000) &&
                   (uVar7 = uVar6, (uVar11 & 0xff000000) != 0)) {
                  uVar7 = 0xff;
LAB_50009202:
                  uVar7 = FUN_500078f7(uVar6,uVar11,uVar7);
                }
              }
              else {
                uVar7 = param_14;
                if (param_14 != 0xfffffffe) goto LAB_50009202;
                uVar7 = -(uint)(uVar11 < uVar6) &
                        ((uVar6 - uVar11 ^ uVar6) & 0xffffff ^ uVar6 - uVar11);
              }
            }
            uVar11 = uVar7;
            if (param_15 == 1) {
              iVar4 = param_3;
              if (param_16 != 0) {
                iVar4 = -param_3;
              }
              FUN_50009f2d(param_9,uVar7,iVar4);
            }
            else if (param_15 == 0x201) {
              iVar4 = param_3;
              if (param_16 != 0) {
                iVar4 = -param_3;
              }
              FUN_5000a3d4(param_9,uVar7,iVar4);
            }
            else if (param_15 == 0x1001) {
              FUN_50009dd9(param_9,uVar7);
            }
            else if (param_15 == 0x1201) {
              FUN_5000a1b8(param_9,uVar7);
            }
          }
LAB_5000959e:
          param_12 = (uint *)((int)param_12 + param_4);
          puVar10 = (uint *)((int)puVar10 + local_1c);
          param_3 = param_3 + 1;
        } while (param_3 < (int)param_1);
      }
      local_8 = local_8 + param_6;
      local_c = (uint *)((int)local_c + param_10);
      if (param_9 != (uint *)0x0) {
        if (param_15 == 1) {
          FUN_5000a16e((int)param_9);
        }
        else if (param_15 == 0x201) {
          FUN_5000a16e((int)param_9);
        }
        else if ((param_15 == 0x1001) || (param_15 == 0x1201)) {
          memset(param_9,0,0x10);
        }
      }
      param_17 = param_17 + 1;
    } while (param_17 < param_2);
  }
  if (param_9 != (uint *)0x0) {
    if (param_15 == 1) {
      FUN_5000a303((int)param_9);
    }
    else if (param_15 == 0x201) {
      FUN_5000a303((int)param_9);
    }
  }
  return;
}


