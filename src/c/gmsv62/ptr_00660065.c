/* ptr_00660065 - 0x00660065 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 ptr_00660065(void)

{
  int iVar1;
  int in_EAX;
  int *piVar2;
  DWORD DVar3;
  DWORD unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  
  DAT_0097972c = *(HINSTANCE *)(in_EAX + 4);
  DAT_00979720 = LoadBitmapA(DAT_0097972c,(LPCSTR)0x75);
  DAT_00979724 = LoadBitmapA(DAT_0097972c,(LPCSTR)0x76);
  _DAT_00979728 = LoadBitmapA(DAT_0097972c,(LPCSTR)0x77);
  DAT_0097972c = (HINSTANCE)LoadBitmapA(DAT_0097972c,(LPCSTR)0x74);
  GetObjectA(DAT_00979720,0x18,(LPVOID)(unaff_EBP + -0x44));
  iVar1 = DAT_00979738;
  _DAT_00979710 = *(int *)(unaff_EBP + -0x40);
  DAT_00979718 = *(int *)(unaff_EBP + -0x3c);
  DAT_0097971c = _DAT_00979710;
  *(DWORD *)(unaff_EBP + -0x2c) = unaff_EBX;
  piVar2 = (int *)(iVar1 + 0x204);
  *(undefined4 *)(unaff_EBP + -0x24) = *(undefined4 *)(iVar1 + 0x200);
  *(DWORD *)(unaff_EBP + -0x28) = unaff_EBX;
  _DAT_0097970c = *piVar2 - *(int *)(unaff_EBP + -0x3c);
  *(int *)(unaff_EBP + -0x20) = _DAT_0097970c;
  _DAT_00979714 = *piVar2;
  _DAT_00979708 = unaff_EBX;
  DAT_00979700 = CreateWindowExA(unaff_EBX,s_button_00968a74,s_Play__00968a7c,0x5800000b,unaff_EDI,
                                 _DAT_0097970c,_DAT_00979710,_DAT_00979714 - _DAT_0097970c,
                                 *(HWND *)(unaff_EBP + 8),(HMENU)0x2710,(HINSTANCE)unaff_EBX,
                                 (LPVOID)unaff_EBX);
  DAT_009796fc = (undefined2)unaff_EBX;
  DVar3 = FUN_004029b9(0x144);
  *(DWORD *)(unaff_EBP + 0x10) = DVar3;
  *(DWORD *)(unaff_EBP + -4) = unaff_EBX;
  if (DVar3 == unaff_EBX) {
    DAT_0097973c = 0;
  }
  else {
    DAT_0097973c = FUN_0045207e(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(DAT_00979738 + 0x20c)
                                ,unaff_EBP + -0x2c);
  }
  iVar1 = DAT_00979738;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004524da(iVar1);
  FUN_0045266e(unaff_EBX);
  FUN_004526dc(1);
  *(undefined4 *)(DAT_0097973c + 0x138) = 1;
  DAT_00979730 = unaff_EBP + -0x254;
  *(DWORD *)(unaff_EBP + -0x1c) = unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x14) = 0x20e;
  *(undefined4 *)(unaff_EBP + -0x18) = 0x22c;
  *(undefined4 *)(unaff_EBP + -0x10) = 0x294;
  DVar3 = FUN_004029b9(0x144);
  *(DWORD *)(unaff_EBP + 0x10) = DVar3;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if (DVar3 == unaff_EBX) {
    DAT_00979734 = 0;
  }
  else {
    DAT_00979734 = FUN_0045207e(*(undefined4 *)(unaff_EBP + 8),*(undefined4 *)(DAT_00979730 + 0x20c)
                                ,unaff_EBP + -0x1c);
  }
  iVar1 = DAT_00979730;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004524da(iVar1);
  FUN_0045266e(unaff_EBX);
  FUN_004526dc(1);
  *(undefined4 *)(DAT_00979734 + 0x138) = 1;
  (*DAT_0097b520)(*(undefined4 *)(unaff_EBP + 8),0xdd,*(int *)(DAT_00979738 + 0x208) * 1000);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 0;
}


