/* FUN_0087f3d5 - 0x0087f3d5 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_0087f3d5(undefined4 param_1,ushort *param_2,undefined4 *param_3)

{
  ushort *puVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  short *psVar5;
  int *piVar6;
  byte *pbVar7;
  int iVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined2 local_458 [255];
  byte local_259 [513];
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  byte *local_38;
  undefined1 local_32;
  undefined1 local_31;
  int local_30;
  undefined2 local_2c;
  short local_2a;
  int local_28;
  int local_24;
  undefined8 local_20;
  int local_18;
  byte *local_14;
  byte *local_10;
  int local_c;
  uint local_8;
  
  local_48 = 0;
  uVar9 = *param_2;
  local_14 = (byte *)0x0;
  local_18 = 0;
  local_38 = (byte *)0x0;
  puVar1 = param_2;
  do {
    if (uVar9 == 0) {
      return local_18;
    }
    param_2 = puVar1 + 1;
    if (local_18 < 0) {
      return local_18;
    }
    if ((uVar9 < 0x20) || (0x78 < uVar9)) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(byte *)((int)&PTR_LAB_008f3fc0 + (uint)uVar9) & 0xf;
    }
    local_48 = (int)(char)(&DAT_008f3fe0)[uVar3 * 8 + local_48] >> 4;
    switch(local_48) {
    case 0:
switchD_0087f44e_caseD_0:
      local_28 = 1;
      FUN_0087fb6a(uVar9,param_1,&local_18);
      break;
    case 1:
      local_c = -1;
      local_44 = 0;
      local_40 = 0;
      local_30 = 0;
      local_24 = 0;
      local_8 = 0;
      local_28 = 0;
      break;
    case 2:
      if (uVar9 == 0x20) {
        local_8 = local_8 | 2;
      }
      else if (uVar9 == 0x23) {
        local_8 = local_8 | 0x80;
      }
      else if (uVar9 == 0x2b) {
        local_8 = local_8 | 1;
      }
      else if (uVar9 == 0x2d) {
        local_8 = local_8 | 4;
      }
      else if (uVar9 == 0x30) {
        local_8 = local_8 | 8;
      }
      break;
    case 3:
      if (uVar9 == 0x2a) {
        local_30 = FUN_0087fbf4(&param_3);
        if (local_30 < 0) {
          local_8 = local_8 | 4;
          local_30 = -local_30;
        }
      }
      else {
        local_30 = (uVar9 - 0x30) + local_30 * 10;
      }
      break;
    case 4:
      local_c = 0;
      break;
    case 5:
      if (uVar9 == 0x2a) {
        local_c = FUN_0087fbf4(&param_3);
        if (local_c < 0) {
          local_c = -1;
        }
      }
      else {
        local_c = (uVar9 - 0x30) + local_c * 10;
      }
      break;
    case 6:
      if (uVar9 == 0x49) {
        if ((*param_2 != 0x36) || (puVar1[2] != 0x34)) {
          local_48 = 0;
          goto switchD_0087f44e_caseD_0;
        }
        param_2 = puVar1 + 3;
        local_8 = local_8 | 0x8000;
      }
      else if (uVar9 == 0x68) {
        local_8 = local_8 | 0x20;
      }
      else if (uVar9 == 0x77) {
        local_8 = local_8 | 0x800;
      }
      break;
    case 7:
      pbVar4 = local_10;
      if (uVar9 < 0x68) {
        if (uVar9 < 0x65) {
          if (uVar9 < 0x59) {
            if (uVar9 != 0x58) {
              if (uVar9 == 0x43) {
                if ((local_8 & 0x830) == 0) {
                  local_8 = local_8 | 0x20;
                }
                goto LAB_0087f685;
              }
              if ((uVar9 != 0x45) && (uVar9 != 0x47)) {
                if (uVar9 == 0x53) {
                  if ((local_8 & 0x830) == 0) {
                    local_8 = local_8 | 0x20;
                  }
                  goto LAB_0087f5e5;
                }
                goto LAB_0087fa10;
              }
              local_44 = 1;
              uVar9 = uVar9 + 0x20;
              goto LAB_0087f657;
            }
LAB_0087f86d:
            local_3c = 7;
LAB_0087f870:
            local_14 = (byte *)0x10;
            if ((local_8 & 0x80) != 0) {
              local_2c = 0x30;
              local_2a = (short)local_3c + 0x51;
              local_24 = 2;
            }
            goto LAB_0087f8d6;
          }
          if (uVar9 == 0x5a) {
            psVar5 = (short *)FUN_0087fbf4(&param_3);
            if ((psVar5 == (short *)0x0) || (pbVar4 = *(byte **)(psVar5 + 2), pbVar4 == (byte *)0x0)
               ) {
              local_10 = PTR_DAT_00970218;
              pbVar4 = PTR_DAT_00970218;
              goto LAB_0087f7f4;
            }
            if ((local_8 & 0x800) == 0) {
              local_28 = 0;
              local_14 = (byte *)(int)*psVar5;
            }
            else {
              local_28 = 1;
              local_14 = (byte *)((uint)(int)*psVar5 >> 1);
            }
          }
          else if (uVar9 == 99) {
LAB_0087f685:
            local_28 = 1;
            local_4c = FUN_0087fbf4(&param_3);
            if ((local_8 & 0x20) == 0) {
              local_458[0] = (undefined2)local_4c;
            }
            else {
              local_31 = 0;
              local_32 = (undefined1)local_4c;
              iVar10 = FUN_00886b24(local_458,&local_32,DAT_009728fc);
              if (iVar10 < 0) {
                local_40 = 1;
              }
            }
            local_14 = (byte *)0x1;
            pbVar4 = (byte *)local_458;
          }
          else if (uVar9 == 100) goto LAB_0087f8cb;
        }
        else {
LAB_0087f657:
          local_8 = local_8 | 0x40;
          pbVar4 = (byte *)local_458;
          pbVar7 = (byte *)local_458;
          if (local_c < 0) {
            local_c = 6;
          }
          else if (local_c == 0) {
            if (uVar9 == 0x67) {
              local_c = 1;
            }
          }
          else {
            if (0x200 < local_c) {
              local_c = 0x200;
            }
            if (0xa3 < local_c) {
              local_10 = (byte *)local_458;
              local_38 = _malloc(local_c + 0x15d);
              pbVar4 = local_38;
              pbVar7 = local_38;
              if (local_38 == (byte *)0x0) {
                local_c = 0xa3;
                pbVar4 = (byte *)local_458;
                pbVar7 = local_10;
              }
            }
          }
          local_10 = pbVar7;
          local_58 = *param_3;
          local_54 = param_3[1];
          param_3 = param_3 + 2;
          (*(code *)PTR_FUN_00970220)(&local_58,pbVar4,(int)(char)uVar9,local_c,local_44);
          uVar3 = local_8 & 0x80;
          if ((uVar3 != 0) && (local_c == 0)) {
            (*(code *)PTR_FUN_0097022c)(pbVar4);
          }
          if ((uVar9 == 0x67) && (uVar3 == 0)) {
            (*(code *)PTR_FUN_00970224)(pbVar4);
          }
          if (*pbVar4 == 0x2d) {
            local_8 = local_8 | 0x100;
            pbVar4 = pbVar4 + 1;
            local_10 = pbVar4;
          }
LAB_0087f7f4:
          local_14 = (byte *)_strlen((char *)pbVar4);
          pbVar4 = local_10;
        }
LAB_0087fa10:
        local_10 = pbVar4;
        uVar3 = local_8;
        if (local_40 == 0) {
          if ((local_8 & 0x40) != 0) {
            if ((local_8 & 0x100) == 0) {
              if ((local_8 & 1) == 0) {
                if ((local_8 & 2) == 0) goto LAB_0087fa4e;
                local_2c = 0x20;
              }
              else {
                local_2c = 0x2b;
              }
            }
            else {
              local_2c = 0x2d;
            }
            local_24 = 1;
          }
LAB_0087fa4e:
          iVar10 = (local_30 - local_24) - (int)local_14;
          if ((local_8 & 0xc) == 0) {
            FUN_0087fb8a(0x20,iVar10,param_1,&local_18);
          }
          FUN_0087fbbb(&local_2c,local_24,param_1,&local_18);
          if (((uVar3 & 8) != 0) && ((uVar3 & 4) == 0)) {
            FUN_0087fb8a(0x30,iVar10,param_1,&local_18);
          }
          if ((local_28 == 0) && (pbVar7 = local_10, pbVar4 = local_14, 0 < (int)local_14)) {
            do {
              pbVar4 = pbVar4 + -1;
              local_50 = FUN_00886b24(&local_4c,pbVar7,DAT_009728fc);
              if (local_50 < 1) break;
              FUN_0087fb6a(local_4c,param_1,&local_18);
              pbVar7 = pbVar7 + local_50;
            } while (0 < (int)pbVar4);
          }
          else {
            FUN_0087fbbb(local_10,local_14,param_1,&local_18);
          }
          if ((local_8 & 4) != 0) {
            FUN_0087fb8a(0x20,iVar10,param_1,&local_18);
          }
        }
      }
      else {
        if (uVar9 == 0x69) {
LAB_0087f8cb:
          local_8 = local_8 | 0x40;
LAB_0087f8cf:
          local_14 = (byte *)0xa;
LAB_0087f8d6:
          if ((local_8 & 0x8000) == 0) {
            if ((local_8 & 0x20) == 0) {
              if ((local_8 & 0x40) == 0) {
                uVar3 = FUN_0087fbf4(&param_3);
                uVar11 = (ulonglong)uVar3;
                goto LAB_0087f929;
              }
              uVar3 = FUN_0087fbf4(&param_3);
            }
            else if ((local_8 & 0x40) == 0) {
              uVar3 = FUN_0087fbf4(&param_3);
              uVar3 = uVar3 & 0xffff;
            }
            else {
              sVar2 = FUN_0087fbf4(&param_3);
              uVar3 = (uint)sVar2;
            }
            uVar11 = (ulonglong)(int)uVar3;
          }
          else {
            uVar11 = FUN_0087fc01(&param_3);
          }
LAB_0087f929:
          if ((((local_8 & 0x40) != 0) && ((longlong)uVar11 < 0x100000000)) &&
             ((longlong)uVar11 < 0)) {
            uVar11 = CONCAT44(-((int)(uVar11 >> 0x20) + (uint)((int)uVar11 != 0)),-(int)uVar11);
            local_8 = local_8 | 0x100;
          }
          local_20._4_4_ = (int)(uVar11 >> 0x20);
          local_20._0_4_ = (int)uVar11;
          if ((local_8 & 0x8000) == 0) {
            local_20._4_4_ = 0;
          }
          if (local_c < 0) {
            local_c = 1;
          }
          else {
            local_8 = local_8 & 0xfffffff7;
            if (0x200 < local_c) {
              local_c = 0x200;
            }
          }
          if ((int)local_20 == 0 && local_20._4_4_ == 0) {
            local_24 = 0;
          }
          local_10 = local_259;
          while ((pbVar4 = local_14, iVar10 = local_c + -1, 0 < local_c || (local_20 != 0))) {
            iVar8 = (int)local_14 >> 0x1f;
            local_c = iVar10;
            iVar10 = __aullrem(local_20,local_14,iVar8);
            iVar10 = iVar10 + 0x30;
            lVar12 = __aulldiv(local_20,pbVar4,iVar8);
            if (0x39 < iVar10) {
              iVar10 = iVar10 + local_3c;
            }
            pbVar4 = local_10 + -1;
            local_20 = lVar12;
            *local_10 = (byte)iVar10;
            local_10 = pbVar4;
          }
          iVar8 = -(int)local_10;
          local_14 = local_259 + iVar8;
          pbVar4 = local_10 + 1;
          local_c = iVar10;
          if (((local_8 & 0x200) != 0) && ((*pbVar4 != 0x30 || (local_14 == (byte *)0x0)))) {
            *local_10 = 0x30;
            local_14 = local_259 + iVar8 + 1;
            pbVar4 = local_10;
          }
          goto LAB_0087fa10;
        }
        if (uVar9 != 0x6e) {
          if (uVar9 == 0x6f) {
            local_14 = (byte *)0x8;
            if ((local_8 & 0x80) != 0) {
              local_8 = local_8 | 0x200;
            }
            goto LAB_0087f8d6;
          }
          if (uVar9 == 0x70) {
            local_c = 8;
            goto LAB_0087f86d;
          }
          if (uVar9 == 0x73) {
LAB_0087f5e5:
            iVar10 = 0x7fffffff;
            if (local_c != -1) {
              iVar10 = local_c;
            }
            pbVar4 = (byte *)FUN_0087fbf4(&param_3);
            if ((local_8 & 0x20) == 0) {
              if (pbVar4 == (byte *)0x0) {
                pbVar4 = PTR_DAT_0097021c;
              }
              local_28 = 1;
              for (pbVar7 = pbVar4; (iVar10 != 0 && (*(short *)pbVar7 != 0)); pbVar7 = pbVar7 + 2) {
                iVar10 = iVar10 + -1;
              }
              local_14 = (byte *)((int)pbVar7 - (int)pbVar4 >> 1);
            }
            else {
              if (pbVar4 == (byte *)0x0) {
                pbVar4 = PTR_DAT_00970218;
              }
              local_14 = (byte *)0x0;
              pbVar7 = pbVar4;
              if (0 < iVar10) {
                do {
                  if (*pbVar7 == 0) break;
                  if ((PTR_DAT_009726f0[(uint)*pbVar7 * 2 + 1] & 0x80) != 0) {
                    pbVar7 = pbVar7 + 1;
                  }
                  pbVar7 = pbVar7 + 1;
                  local_14 = local_14 + 1;
                } while ((int)local_14 < iVar10);
              }
            }
            goto LAB_0087fa10;
          }
          if (uVar9 != 0x75) {
            if (uVar9 != 0x78) goto LAB_0087fa10;
            local_3c = 0x27;
            goto LAB_0087f870;
          }
          goto LAB_0087f8cf;
        }
        piVar6 = (int *)FUN_0087fbf4(&param_3);
        if ((local_8 & 0x20) == 0) {
          *piVar6 = local_18;
        }
        else {
          *(undefined2 *)piVar6 = (undefined2)local_18;
        }
        local_40 = 1;
      }
      if (local_38 != (byte *)0x0) {
        FUN_0087aa78(local_38);
        local_38 = (byte *)0x0;
      }
    }
    uVar9 = *param_2;
    puVar1 = param_2;
  } while( true );
}


