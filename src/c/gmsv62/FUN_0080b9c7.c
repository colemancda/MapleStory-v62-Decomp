/* FUN_0080b9c7 - 0x0080b9c7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0080b9c7(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  HDC pHVar4;
  HBITMAP h;
  HGDIOBJ pvVar5;
  undefined4 *puVar6;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00419192(unaff_EBP + 0xc);
  FUN_0078a024(*(undefined4 *)(unaff_EBP + 8));
  FUN_004489f5();
  iVar2 = *(int *)(extraout_ECX + 4);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  (**(code **)(iVar2 + 0x2c))();
  (**(code **)(*(int *)(extraout_ECX + 4) + 0x30))();
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  FUN_0042fb0a();
  if (*(int *)(unaff_EBP + -0x10) == 0) {
    FUN_00878dfb();
  }
  uVar3 = FUN_0042fb34();
  *(undefined4 *)(unaff_EBP + 8) = uVar3;
  pHVar4 = CreateCompatibleDC((HDC)0x0);
  *(HDC *)(extraout_ECX + 0x5b0) = pHVar4;
  if (pHVar4 != (HDC)0x0) {
    FUN_0087a1b0();
    _memset(&stack0xfffffff0,0,0x34);
    h = CreateDIBSection(*(HDC *)(extraout_ECX + 0x5b0),(BITMAPINFO *)&stack0xfffffff0,0,
                         (void **)(extraout_ECX + 0x5a4),(HANDLE)0x0,0);
    *(HBITMAP *)(extraout_ECX + 0x5a8) = h;
    pvVar5 = SelectObject(*(HDC *)(extraout_ECX + 0x5b0),h);
    *(HGDIOBJ *)(extraout_ECX + 0x5ac) = pvVar5;
  }
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(extraout_ECX + 0x5c4);
  FUN_00402aba();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  puVar6 = (undefined4 *)FUN_0080ce91();
  *puVar6 = 0;
  piVar1 = (int *)(extraout_ECX + 0x5c8);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *(undefined4 *)(extraout_ECX + 0x5c4) = 0;
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int **)(unaff_EBP + -0x10) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


