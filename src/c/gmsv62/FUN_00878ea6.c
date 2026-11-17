/* FUN_00878ea6 - 0x00878ea6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00878ea6(int *param_1,undefined4 param_2,uint param_3,VARTYPE param_4,
                ICreateErrorInfo *param_5,LPCWSTR param_6,int param_7,void **param_8)

{
  undefined4 *puVar1;
  undefined1 ***pppuVar2;
  WCHAR WVar3;
  void **ppvVar4;
  undefined1 ***pppuVar5;
  uint uVar6;
  undefined1 *puVar7;
  short *psVar8;
  undefined4 *puVar9;
  HRESULT HVar10;
  int iVar11;
  ushort **ppuVar12;
  LPCWSTR pWVar13;
  int iVar14;
  undefined4 *puVar15;
  LPCWSTR pWVar16;
  short sVar17;
  ushort *puVar18;
  short *psVar19;
  ushort uVar20;
  undefined1 **ppuStack_74;
  uint uStack_70;
  ushort *puStack_6c;
  ushort local_58 [2];
  LPOLESTR local_54;
  LPOLESTR local_50;
  LPOLESTR local_4c;
  DWORD local_48;
  code *local_40;
  int local_3c;
  undefined1 *local_38;
  undefined4 *local_34;
  uint local_30;
  uint local_2c;
  _union_2683 local_28;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  LPCWSTR local_c;
  undefined1 ***local_8;
  
  pWVar16 = param_6;
  *param_8 = (void *)0x0;
  if (param_1 == (int *)0x0) {
    return -0x7fffbffd;
  }
  local_38 = (undefined1 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0;
  local_2c = 0;
  if (param_6 == (LPCWSTR)0x0) {
    uVar6 = 0;
  }
  else {
    puStack_6c = (ushort *)0x878edc;
    uVar6 = lstrlenW(param_6);
    local_30 = uVar6;
  }
  local_14 = 0xfffffffd;
  if ((param_3 & 0xc) != 0) {
    if (uVar6 == 0) {
      return -0x7ff8ffa9;
    }
    local_34 = &local_14;
    local_2c = 1;
  }
  if (uVar6 != 0) {
    FUN_0087a1b0();
    puVar15 = (undefined4 *)&stack0xffffff9c;
    for (iVar11 = (uVar6 & 0xfffffff) << 2; iVar11 != 0; iVar11 = iVar11 + -1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    local_10 = (undefined4 *)&stack0xffffff9c;
    local_c = pWVar16;
    for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
      *(undefined1 *)puVar15 = 0;
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
    local_38 = &stack0xffffff9c;
    local_8 = &ppuStack_74 + local_30 * 4;
    puVar15 = (undefined4 *)&stack0xffffff9c;
    if (*pWVar16 != L'\0') {
      ppuVar12 = &puStack_6c + local_30 * 4;
      puVar7 = (undefined1 *)(param_7 + -4);
      iVar11 = param_7 + -8;
      do {
        WVar3 = *local_c;
        uVar20 = WVar3 & 0xf7ff;
        *(ushort *)local_8 = uVar20;
        pppuVar5 = local_8;
        if (0x4002 < uVar20) {
          switch(uVar20) {
          case 0x4003:
          case 0x4004:
          case 0x4005:
          case 0x4006:
          case 0x4007:
          case 0x4008:
          case 0x4009:
          case 0x400a:
          case 0x400b:
          case 0x400c:
          case 0x400d:
          case 0x400e:
          case 0x4011:
            break;
          default:
switchD_00878f94_caseD_f:
            if ((WVar3 & 0x2000U) == 0) {
              return -0x7ff8ffa9;
            }
          }
switchD_00878f94_caseD_3:
          puVar15 = (undefined4 *)(puVar7 + 4);
          iVar14 = iVar11 + 4;
          puVar7 = puVar7 + 4;
          *ppuVar12 = (ushort *)*puVar15;
          goto LAB_0087903c;
        }
        if (uVar20 == 0x4002) goto switchD_00878f94_caseD_3;
        switch(uVar20) {
        case 2:
          sVar17 = *(short *)(puVar7 + 4);
          goto LAB_00878fa3;
        case 3:
        case 8:
        case 9:
        case 10:
        case 0xd:
          goto switchD_00878f94_caseD_3;
        case 4:
          *(undefined2 *)local_8 = 5;
        case 5:
        case 7:
          iVar14 = iVar11 + 8;
          *ppuVar12 = *(ushort **)(iVar11 + 8);
          puVar7 = puVar7 + 8;
          puVar18 = *(ushort **)(iVar11 + 0xc);
          goto LAB_00878fd1;
        case 6:
          puVar15 = *(undefined4 **)(puVar7 + 4);
          iVar14 = iVar11 + 4;
          puVar7 = puVar7 + 4;
          *ppuVar12 = (ushort *)*puVar15;
          puVar18 = (ushort *)puVar15[1];
LAB_00878fd1:
          ppuVar12[1] = puVar18;
          break;
        case 0xb:
          sVar17 = -(ushort)(*(short *)(puVar7 + 4) != 0);
LAB_00878fa3:
          iVar14 = iVar11 + 4;
          puVar7 = puVar7 + 4;
          *(short *)ppuVar12 = sVar17;
          break;
        case 0xc:
          puVar15 = *(undefined4 **)(puVar7 + 4);
          iVar14 = iVar11 + 4;
          puVar7 = puVar7 + 4;
          pppuVar2 = local_8 + 1;
          *local_8 = (undefined1 **)*puVar15;
          *pppuVar2 = (undefined1 **)puVar15[1];
          pppuVar5[2] = (undefined1 **)puVar15[2];
          pppuVar5[3] = (undefined1 **)puVar15[3];
          break;
        case 0xe:
          puVar15 = *(undefined4 **)(puVar7 + 4);
          iVar14 = iVar11 + 4;
          puVar7 = puVar7 + 4;
          pppuVar2 = local_8 + 1;
          *local_8 = (undefined1 **)*puVar15;
          *pppuVar2 = (undefined1 **)puVar15[1];
          pppuVar5[2] = (undefined1 **)puVar15[2];
          pppuVar5[3] = (undefined1 **)puVar15[3];
          *(undefined2 *)local_8 = 0xe;
          break;
        default:
          goto switchD_00878f94_caseD_f;
        case 0x11:
          iVar14 = iVar11 + 4;
          puVar7 = puVar7 + 4;
          *(undefined1 *)ppuVar12 = *puVar7;
        }
LAB_0087903c:
        local_c = local_c + 1;
        local_8 = local_8 + -4;
        ppuVar12 = ppuVar12 + -4;
        puVar15 = local_10;
        iVar11 = iVar14;
        pWVar16 = param_6;
      } while (*local_c != L'\0');
    }
    psVar8 = (short *)(puVar15 + local_2c * 4);
    iVar11 = 0;
    pWVar13 = pWVar16 + (local_30 - local_2c) + -1;
    if (pWVar16 <= pWVar13) {
      while ((*pWVar13 & 0xbfffU) == 0x80c) {
        psVar19 = psVar8;
        if ((*pWVar13 & 0x4000U) != 0) {
          psVar19 = *(short **)(psVar8 + 4);
        }
        if ((*psVar19 != 10) || (*(int *)(psVar19 + 4) != -0x7ffdfffc)) break;
        iVar11 = iVar11 + 1;
        psVar8 = psVar8 + 8;
        pWVar13 = pWVar13 + -1;
        if (pWVar13 < pWVar16) break;
      }
      if (iVar11 != 0) {
        uVar6 = 0;
        if (local_2c != 0) {
          puVar9 = local_10 + iVar11 * 4;
          puVar15 = local_10;
          do {
            *puVar9 = *puVar15;
            puVar9[1] = puVar15[1];
            puVar1 = puVar15 + 3;
            puVar9[2] = puVar15[2];
            uVar6 = uVar6 + 1;
            puVar15 = puVar15 + 4;
            puVar9[3] = *puVar1;
            puVar9 = puVar9 + 4;
          } while (uVar6 < local_2c);
        }
        local_30 = local_30 - iVar11;
        local_38 = local_38 + iVar11 * 0x10;
      }
    }
  }
  puStack_6c = (ushort *)0x8790f3;
  VariantInit((VARIANTARG *)&local_28.n2);
  local_18 = 0xffffffff;
  puStack_6c = local_58;
  puVar18 = local_58;
  for (iVar11 = 8; iVar11 != 0; iVar11 = iVar11 + -1) {
    puVar18[0] = 0;
    puVar18[1] = 0;
    puVar18 = puVar18 + 2;
  }
  uStack_70 = -(uint)(param_4 != 0) & (uint)&local_28;
  ppuStack_74 = &local_38;
  iVar11 = (**(code **)(*param_1 + 0x18))(param_1,param_2,&DAT_00980680,0,param_3);
  if (iVar11 < 0) {
    VariantClear((VARIANTARG *)&local_28.n2);
    if (iVar11 != -0x7ffdfff7) {
      return iVar11;
    }
    if (local_40 != (code *)0x0) {
      (*local_40)(local_58);
    }
    param_5 = (ICreateErrorInfo *)0x0;
    HVar10 = CreateErrorInfo(&param_5);
    if (-1 < HVar10) {
      (*param_5->lpVtbl->SetGUID)(param_5,(GUID *)&DAT_00970078);
      if (local_54 != (LPOLESTR)0x0) {
        (*param_5->lpVtbl->SetSource)(param_5,local_54);
      }
      if (local_50 != (LPOLESTR)0x0) {
        (*param_5->lpVtbl->SetDescription)(param_5,local_50);
      }
      if (local_4c != (LPOLESTR)0x0) {
        (*param_5->lpVtbl->SetHelpFile)(param_5,local_4c);
      }
      (*param_5->lpVtbl->SetHelpContext)(param_5,local_48);
      ppvVar4 = param_8;
      HVar10 = (*param_5->lpVtbl->QueryInterface)(param_5,(IID *)&DAT_00970068,param_8);
      if (HVar10 < 0) {
        *ppvVar4 = (void *)0x0;
      }
      (*param_5->lpVtbl->Release)(param_5);
    }
    if (local_54 != (BSTR)0x0) {
      SysFreeString(local_54);
    }
    if (local_50 != (BSTR)0x0) {
      SysFreeString(local_50);
    }
    if (local_4c != (BSTR)0x0) {
      SysFreeString(local_4c);
    }
    if (local_58[0] != 0) {
      if (local_58[0] < 0xfe00) {
        return local_58[0] + 0x80040200;
      }
      return -0x7ffb0001;
    }
    return local_3c;
  }
  if (param_4 == 0) {
    return iVar11;
  }
  if (((param_4 == 0xc) || (param_4 == local_28.n2.vt)) ||
     (iVar11 = VariantChangeType((VARIANTARG *)&local_28.n2,(VARIANTARG *)&local_28.n2,0,param_4),
     -1 < iVar11)) {
    switch(param_4) {
    case 2:
    case 0xb:
      *(undefined2 *)&param_5->lpVtbl = local_28._8_2_;
      break;
    case 5:
    case 6:
    case 7:
      param_5->lpVtbl = (ICreateErrorInfoVtbl *)local_28._8_4_;
      param_5[1].lpVtbl = (ICreateErrorInfoVtbl *)local_28._12_4_;
      break;
    case 0xc:
    case 0xe:
      param_5->lpVtbl = (ICreateErrorInfoVtbl *)local_28._0_4_;
      param_5[1].lpVtbl = (ICreateErrorInfoVtbl *)local_28.decVal.Hi32;
      param_5[2].lpVtbl = (ICreateErrorInfoVtbl *)local_28._8_4_;
      param_5[3].lpVtbl = (ICreateErrorInfoVtbl *)local_28._12_4_;
      break;
    default:
      if ((param_4 & 0x6000) != 0x2000) {
        iVar11 = -0x7ff8ffa9;
        goto LAB_008792bb;
      }
    case 3:
    case 4:
    case 8:
    case 9:
    case 10:
    case 0xd:
      param_5->lpVtbl = (ICreateErrorInfoVtbl *)local_28._8_4_;
      break;
    case 0x11:
      *(undefined1 *)&param_5->lpVtbl = local_28._8_1_;
    }
  }
  else {
LAB_008792bb:
    VariantClear((VARIANTARG *)&local_28.n2);
  }
  return iVar11;
}


