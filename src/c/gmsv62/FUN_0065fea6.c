/* FUN_0065fea6 - 0x0065fea6 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0065fea6(void)

{
  uint uVar1;
  HGDIOBJ h;
  undefined4 uVar2;
  HDC hdc;
  int iVar3;
  HBRUSH hbr;
  int *piVar4;
  int iVar5;
  int unaff_EBP;
  int iVar6;
  bool bVar7;
  
  FUN_00879bb8();
  *(undefined1 *)(unaff_EBP + -0x254) = 0;
  FUN_0087b200(unaff_EBP + -0x254,s_http___ingameweb_nexon_net_maple_00968a84);
  *(undefined4 *)(unaff_EBP + -0x54) = 0x20e;
  *(undefined4 *)(unaff_EBP + -0x50) = 0x68;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0;
  uVar2 = (*DAT_0097b380)(0);
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + -0x48) = uVar2;
  if (uVar1 < 0x85) {
    if (uVar1 == 0x84) {
      uVar2 = 1;
      goto LAB_006602d9;
    }
    if (uVar1 == 1) {
      DAT_0097972c = *(HINSTANCE *)(*(int *)(unaff_EBP + 0x14) + 4);
      DAT_00979720 = LoadBitmapA(DAT_0097972c,(LPCSTR)0x75);
      DAT_00979724 = LoadBitmapA(DAT_0097972c,(LPCSTR)0x76);
      _DAT_00979728 = LoadBitmapA(DAT_0097972c,(LPCSTR)0x77);
      DAT_0097972c = (HINSTANCE)LoadBitmapA(DAT_0097972c,(LPCSTR)0x74);
      GetObjectA(DAT_00979720,0x18,(LPVOID)(unaff_EBP + -0x44));
      iVar5 = DAT_00979738;
      _DAT_00979710 = *(int *)(unaff_EBP + -0x40);
      DAT_00979718 = *(int *)(unaff_EBP + -0x3c);
      DAT_0097971c = _DAT_00979710;
      *(undefined4 *)(unaff_EBP + -0x2c) = 0;
      piVar4 = (int *)(iVar5 + 0x204);
      *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar5 + 0x200);
      *(undefined4 *)(unaff_EBP + -0x28) = 0;
      _DAT_0097970c = *piVar4 - *(int *)(unaff_EBP + -0x3c);
      *(int *)(unaff_EBP + -0x20) = _DAT_0097970c;
      _DAT_00979708 = 0;
      _DAT_00979714 = *piVar4;
      DAT_00979700 = CreateWindowExA(0,s_button_00968a74,s_Play__00968a7c,0x5800000b,0x20e,
                                     _DAT_0097970c,_DAT_00979710,_DAT_00979714 - _DAT_0097970c,
                                     *(HWND *)(unaff_EBP + 8),(HMENU)0x2710,(HINSTANCE)0x0,
                                     (LPVOID)0x0);
      DAT_009796fc = 0;
      iVar5 = FUN_004029b9(0x144);
      *(int *)(unaff_EBP + 0x10) = iVar5;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar5 == 0) {
        DAT_0097973c = (int *)0x0;
      }
      else {
        DAT_0097973c = (int *)FUN_0045207e(*(undefined4 *)(unaff_EBP + 8),
                                           *(undefined4 *)(DAT_00979738 + 0x20c),unaff_EBP + -0x2c);
      }
      iVar5 = DAT_00979738;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004524da(iVar5);
      FUN_0045266e(0);
      FUN_004526dc(1);
      DAT_0097973c[0x4e] = 1;
      DAT_00979730 = unaff_EBP + -0x254;
      *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      *(undefined4 *)(unaff_EBP + -0x14) = 0x20e;
      *(undefined4 *)(unaff_EBP + -0x18) = 0x22c;
      *(undefined4 *)(unaff_EBP + -0x10) = 0x294;
      iVar5 = FUN_004029b9(0x144);
      *(int *)(unaff_EBP + 0x10) = iVar5;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      if (iVar5 == 0) {
        DAT_00979734 = (int *)0x0;
      }
      else {
        DAT_00979734 = (int *)FUN_0045207e(*(undefined4 *)(unaff_EBP + 8),
                                           *(undefined4 *)(DAT_00979730 + 0x20c),unaff_EBP + -0x1c);
      }
      iVar5 = DAT_00979730;
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      FUN_004524da(iVar5);
      FUN_0045266e(0);
      FUN_004526dc(1);
      DAT_00979734[0x4e] = 1;
      (*DAT_0097b520)(*(undefined4 *)(unaff_EBP + 8),0xdd,*(int *)(DAT_00979738 + 0x208) * 1000,0);
    }
    else if (uVar1 == 2) {
      if (DAT_0097973c != (int *)0x0) {
        (**(code **)(*DAT_0097973c + 0x24))(1);
      }
      if (DAT_00979734 != (int *)0x0) {
        (**(code **)(*DAT_00979734 + 0x24))(1);
      }
      (*DAT_0097b514)(0);
    }
    else {
      if (uVar1 == 0x10) {
        DAT_0097973c[0x4e] = 1;
        FUN_004526dc(0);
        DAT_00979734[0x4e] = 1;
        FUN_004526dc(0);
        goto LAB_006602ce;
      }
      if (uVar1 != 0x2b) goto LAB_00660281;
      iVar5 = *(int *)(unaff_EBP + 0x14);
      iVar6 = *(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x1c);
      iVar3 = *(int *)(iVar5 + 4);
      *(int *)(unaff_EBP + 0x14) = *(int *)(iVar5 + 0x28) - *(int *)(iVar5 + 0x20);
      if (iVar3 == 10000) {
        if ((*(uint *)(iVar5 + 0x10) & 1) == 0) {
          DAT_009796fc = (ushort)((byte)*(uint *)(iVar5 + 0x10) >> 1 & 2);
        }
        else {
          DAT_009796fc = 1;
        }
        hdc = CreateCompatibleDC(*(HDC *)(iVar5 + 0x18));
        h = (&DAT_00979720)[(short)DAT_009796fc];
        *(HDC *)(unaff_EBP + 0xc) = hdc;
        SelectObject(hdc,h);
        *(undefined4 *)(unaff_EBP + 0x10) = 0;
        if (0 < *(int *)(unaff_EBP + 0x14)) {
          do {
            *(undefined4 *)(unaff_EBP + 8) = 0;
            if (0 < iVar6) {
              do {
                BitBlt(*(HDC *)(iVar5 + 0x18),*(int *)(unaff_EBP + 8),*(int *)(unaff_EBP + 0x10),
                       DAT_0097971c,DAT_00979718,*(HDC *)(unaff_EBP + 0xc),0,0,0xcc0020);
                *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + DAT_0097971c;
              } while (*(int *)(unaff_EBP + 8) < iVar6);
            }
            iVar3 = *(int *)(unaff_EBP + 0x10) + DAT_00979718;
            *(int *)(unaff_EBP + 0x10) = iVar3;
          } while (iVar3 < *(int *)(unaff_EBP + 0x14));
        }
        DeleteDC(*(HDC *)(unaff_EBP + 0xc));
        hbr = GetStockObject(4);
        FrameRect(*(HDC *)(iVar5 + 0x18),(RECT *)(iVar5 + 0x1c),hbr);
      }
    }
  }
  else if (uVar1 == 0x100) {
    bVar7 = *(int *)(unaff_EBP + 0x10) == 0x1b;
LAB_006602cc:
    if (bVar7) {
LAB_006602ce:
      (*DAT_0097b518)(*(undefined4 *)(unaff_EBP + 8));
    }
  }
  else if (uVar1 == 0x111) {
    if ((short)*(undefined4 *)(unaff_EBP + 0x10) == 10000) {
      bVar7 = (short)((uint)*(undefined4 *)(unaff_EBP + 0x10) >> 0x10) == 0;
      goto LAB_006602cc;
    }
  }
  else if (uVar1 == 0x113) {
    if (*(int *)(unaff_EBP + 0x10) == 0xdd) {
      EnableWindow(DAT_00979700,1);
      (*DAT_0097b51c)(*(undefined4 *)(unaff_EBP + 8),0xdd);
    }
  }
  else if (uVar1 != 0x400) {
LAB_00660281:
    uVar2 = (*DAT_0097b510)(*(undefined4 *)(unaff_EBP + 8),uVar1,*(undefined4 *)(unaff_EBP + 0x10),
                            *(undefined4 *)(unaff_EBP + 0x14));
    goto LAB_006602d9;
  }
  uVar2 = 0;
LAB_006602d9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


