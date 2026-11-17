/* FUN_00866ef1 - 0x00866ef1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00866ef1(void)

{
  int iVar1;
  HANDLE pvVar2;
  BOOL BVar3;
  int extraout_ECX;
  int iVar4;
  uint uVar5;
  int unaff_EBP;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  FUN_00879bb8();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xfffffe90;
  *(undefined4 *)(unaff_EBP + -0x170) = 0;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX;
  puVar6 = (undefined4 *)(unaff_EBP + -0x16c);
  for (iVar4 = 0x49; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  iVar4 = (**(code **)(extraout_ECX + 0x44))(2,0);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *(int *)(unaff_EBP + -0x14) = iVar4;
  if (iVar4 != -1) {
    *(undefined4 *)(unaff_EBP + -0x170) = 0x128;
    *(undefined4 *)(unaff_EBP + -4) = 2;
    iVar1 = (**(code **)(extraout_ECX + 0x48))
                      (*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x170);
    iVar4 = extraout_ECX;
    while (*(undefined4 *)(unaff_EBP + -4) = 0xffffffff, iVar1 != 0) {
      pvVar2 = OpenProcess(0x1f0fff,0,*(DWORD *)(unaff_EBP + -0x168));
      *(HANDLE *)(unaff_EBP + -0x1c) = pvVar2;
      if (pvVar2 != (HANDLE)0x0) {
        for (uVar5 = 0;
            (iVar4 = **(int **)(unaff_EBP + 8), iVar4 != 0 && (uVar5 < *(uint *)(iVar4 + -4)));
            uVar5 = uVar5 + 1) {
          puVar6 = (undefined4 *)(uVar5 * 0x16 + iVar4);
          puVar7 = (undefined4 *)(unaff_EBP + -0x38);
          for (iVar1 = 5; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar7 = *puVar6;
            puVar6 = puVar6 + 1;
            puVar7 = puVar7 + 1;
          }
          *(undefined2 *)puVar7 = *(undefined2 *)puVar6;
          BVar3 = ReadProcessMemory(*(HANDLE *)(unaff_EBP + -0x1c),*(LPCVOID *)(unaff_EBP + -0x36),
                                    (LPVOID)(unaff_EBP + -0x48),0x10,(SIZE_T *)(unaff_EBP + -0x20));
          if ((((BVar3 != 0) && (*(int *)(unaff_EBP + -0x20) == 0x10)) &&
              (*(int *)(unaff_EBP + -0x32) == *(int *)(unaff_EBP + -0x48))) &&
             (((*(int *)(unaff_EBP + -0x2e) == *(int *)(unaff_EBP + -0x44) &&
               (*(int *)(unaff_EBP + -0x2a) == *(int *)(unaff_EBP + -0x40))) &&
              (*(int *)(unaff_EBP + -0x26) == *(int *)(unaff_EBP + -0x3c))))) {
            CloseHandle(*(HANDLE *)(unaff_EBP + -0x14));
            FUN_00414edd(unaff_EBP + -0x14c,0xffffffff);
            iVar4 = (int)*(short *)(unaff_EBP + -0x38);
            goto LAB_0086703a;
          }
        }
        iVar4 = *(int *)(unaff_EBP + -0x18);
      }
      *(undefined4 *)(unaff_EBP + -4) = 4;
      iVar1 = (**(code **)(iVar4 + 0x4c))(*(undefined4 *)(unaff_EBP + -0x14),unaff_EBP + -0x170);
    }
    CloseHandle(*(HANDLE *)(unaff_EBP + -0x14));
  }
  iVar4 = 0;
LAB_0086703a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4;
}


