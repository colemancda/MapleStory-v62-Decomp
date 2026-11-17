/* FUN_008693d0 - 0x008693d0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_008693d0(void)

{
  HANDLE pvVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  HANDLE unaff_EDI;
  undefined4 *puVar5;
  int in_stack_00000010;
  int in_stack_0000232c;
  
  FUN_0087a1b0();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0087b372();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  FUN_0086a590();
  puVar5 = (undefined4 *)&stack0x00002228;
  for (iVar3 = 0x49; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  pvVar1 = (HANDLE)CreateToolhelp32Snapshot();
  if ((pvVar1 != (HANDLE)0xffffffff) && (iVar3 = Process32First(), iVar3 != 0)) {
    do {
      FUN_0087cf51();
      FUN_0087cec7();
      iVar3 = 0;
      if (0 < in_stack_00000010) {
        do {
          if ((&stack0x00000000 == (undefined1 *)0xffffedec) && (iVar2 = FUN_0087bd4a(), iVar2 == 0)
             ) {
            return *(int *)(iVar3 * 4 + -0x1200);
          }
          iVar3 = iVar3 + 1;
          pvVar1 = unaff_EDI;
        } while (iVar3 < in_stack_00000010);
      }
      FUN_0086a600();
      iVar3 = Process32Next();
    } while (iVar3 != 0);
    CloseHandle(pvVar1);
    puVar5 = (undefined4 *)&stack0xfffffff8;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    pvVar1 = (HANDLE)CreateToolhelp32Snapshot();
    if (pvVar1 != (HANDLE)0xffffffff) {
      iVar3 = Thread32First();
      while (iVar3 != 0) {
        iVar3 = 0;
        if (0 < in_stack_0000232c) {
          piVar4 = (int *)&stack0x00002330;
          do {
            if ((HANDLE)*piVar4 == unaff_EDI) {
              DAT_0097f7f0 = &stack0x00002730 + iVar3 * 0x20;
              goto LAB_0086a52c;
            }
            iVar3 = iVar3 + 1;
            piVar4 = piVar4 + 1;
          } while (iVar3 < in_stack_0000232c);
        }
        DAT_0097f7f0 = (undefined1 *)0x0;
LAB_0086a52c:
        if (DAT_0097f7f0 != (undefined1 *)0x0) {
          DAT_0097f7f4 = 0;
          EnumThreadWindows(0x1c,(WNDENUMPROC)&LAB_008692e0,(LPARAM)&stack0x00000000);
          if (DAT_0097f7f4 != 0) {
            return DAT_0097f7f4;
          }
        }
        iVar3 = Thread32Next();
      }
      CloseHandle(pvVar1);
    }
  }
  return 0;
}


