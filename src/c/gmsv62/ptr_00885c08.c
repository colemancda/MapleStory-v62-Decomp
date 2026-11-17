/* ptr_00885c08 - 0x00885c08 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */

int ptr_00885c08(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x18);
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (*(int *)(unaff_EBP + -0x1c) != 0) {
    *(undefined4 *)(iVar1 + -4) = 0;
    *(undefined4 *)(iVar1 + -8) = 0;
    *(undefined4 *)(iVar1 + -0xc) = *(undefined4 *)(unaff_EBP + -0x20);
    *(undefined4 *)(iVar1 + -0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
    *(undefined4 *)(iVar1 + -0x14) = *(undefined4 *)(unaff_EBP + 0x14);
    *(undefined4 *)(iVar1 + -0x18) = *(undefined4 *)(unaff_EBP + 0x10);
    *(undefined4 *)(iVar1 + -0x1c) = 0x220;
    *(undefined4 *)(iVar1 + -0x20) = *(undefined4 *)(unaff_EBP + 0x20);
    puVar3 = (undefined1 *)(iVar1 + -0x24);
    *(undefined4 *)(iVar1 + -0x24) = 0x885c39;
    iVar1 = WideCharToMultiByte(*(UINT *)(iVar1 + -0x20),*(DWORD *)(iVar1 + -0x1c),
                                *(LPCWSTR *)(iVar1 + -0x18),*(int *)(iVar1 + -0x14),
                                *(LPSTR *)(iVar1 + -0x10),*(int *)(iVar1 + -0xc),
                                *(LPCSTR *)(iVar1 + -8),*(LPBOOL *)(iVar1 + -4));
    if (iVar1 != 0) {
      *(undefined4 *)(puVar3 + -4) = 0;
      *(undefined4 *)(puVar3 + -8) = 0;
      *(undefined4 *)(puVar3 + -0xc) = *(undefined4 *)(unaff_EBP + -0x20);
      *(undefined4 *)(puVar3 + -0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
      *(undefined4 *)(puVar3 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
      *(undefined4 *)(puVar3 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
      puVar4 = puVar3 + -0x1c;
      *(undefined4 *)(puVar3 + -0x1c) = 0x885c55;
      iVar1 = LCMapStringA(*(LCID *)(puVar3 + -0x18),*(DWORD *)(puVar3 + -0x14),
                           *(LPCSTR *)(puVar3 + -0x10),*(int *)(puVar3 + -0xc),
                           *(LPSTR *)(puVar3 + -8),*(int *)(puVar3 + -4));
      *(int *)(unaff_EBP + -0x2c) = iVar1;
      if (iVar1 != 0) {
        *(undefined4 *)(unaff_EBP + -4) = 1;
        *(undefined4 *)(puVar4 + -4) = 0x885c73;
        FUN_0087a1b0();
        *(undefined1 **)(unaff_EBP + -0x18) = puVar4;
        *(undefined1 **)(unaff_EBP + -0x24) = puVar4;
        *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
        if (puVar4 != (undefined1 *)0x0) {
          *(int *)(puVar4 + -4) = iVar1;
          *(undefined1 **)(puVar4 + -8) = puVar4;
          *(undefined4 *)(puVar4 + -0xc) = *(undefined4 *)(unaff_EBP + -0x20);
          *(undefined4 *)(puVar4 + -0x10) = *(undefined4 *)(unaff_EBP + -0x1c);
          *(undefined4 *)(puVar4 + -0x14) = *(undefined4 *)(unaff_EBP + 0xc);
          *(undefined4 *)(puVar4 + -0x18) = *(undefined4 *)(unaff_EBP + 8);
          puVar5 = puVar4 + -0x1c;
          *(undefined4 *)(puVar4 + -0x1c) = 0x885cab;
          iVar2 = LCMapStringA(*(LCID *)(puVar4 + -0x18),*(DWORD *)(puVar4 + -0x14),
                               *(LPCSTR *)(puVar4 + -0x10),*(int *)(puVar4 + -0xc),
                               *(LPSTR *)(puVar4 + -8),*(int *)(puVar4 + -4));
          if (iVar2 != 0) {
            if ((*(byte *)(unaff_EBP + 0xd) & 4) != 0) {
              iVar2 = *(int *)(unaff_EBP + 0x1c);
              if (iVar2 != 0) {
                if (iVar1 <= iVar2) {
                  iVar2 = iVar1;
                }
                *(int *)(puVar5 + -4) = iVar2;
                *(undefined1 **)(puVar5 + -8) = puVar4;
                *(undefined4 *)(puVar5 + -0xc) = *(undefined4 *)(unaff_EBP + 0x18);
                *(undefined4 *)(puVar5 + -0x10) = 0x885ccc;
                _strncpy(*(char **)(puVar5 + -0xc),*(char **)(puVar5 + -8),*(size_t *)(puVar5 + -4))
                ;
              }
              goto LAB_00885cf9;
            }
            if (*(int *)(unaff_EBP + 0x1c) == 0) {
              *(undefined4 *)(puVar5 + -4) = 0;
              *(undefined4 *)(puVar5 + -8) = 0;
            }
            else {
              *(undefined4 *)(puVar5 + -4) = *(undefined4 *)(unaff_EBP + 0x1c);
              *(undefined4 *)(puVar5 + -8) = *(undefined4 *)(unaff_EBP + 0x18);
            }
            *(int *)(puVar5 + -0xc) = iVar1;
            *(undefined1 **)(puVar5 + -0x10) = puVar4;
            *(undefined4 *)(puVar5 + -0x14) = 1;
            *(undefined4 *)(puVar5 + -0x18) = *(undefined4 *)(unaff_EBP + 0x20);
            *(undefined4 *)(puVar5 + -0x1c) = 0x885ced;
            iVar1 = MultiByteToWideChar(*(UINT *)(puVar5 + -0x18),*(DWORD *)(puVar5 + -0x14),
                                        *(LPCSTR *)(puVar5 + -0x10),*(int *)(puVar5 + -0xc),
                                        *(LPWSTR *)(puVar5 + -8),*(int *)(puVar5 + -4));
            if (iVar1 != 0) goto LAB_00885cf9;
          }
        }
      }
    }
  }
  iVar1 = 0;
LAB_00885cf9:
  ExceptionList = *(void **)(unaff_EBP + -0x10);
  return iVar1;
}


