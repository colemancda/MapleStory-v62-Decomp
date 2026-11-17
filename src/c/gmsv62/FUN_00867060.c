/* FUN_00867060 - 0x00867060 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_00867060(void)

{
  char *pcVar1;
  DWORD DVar2;
  int extraout_ECX;
  int iVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_00879bb8();
  *(int *)(extraout_ECX + 0x40) = *(int *)(extraout_ECX + 0x40) + 1;
  if (*(int *)(extraout_ECX + 0x3c) < 1) {
    *(undefined1 *)(unaff_EBP + -0x118) = 0;
    puVar4 = (undefined4 *)(unaff_EBP + -0x117);
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    GetModuleFileNameA((HMODULE)0x0,(LPSTR)(unaff_EBP + -0x118),0x104);
    FUN_0087b200(unaff_EBP + -0x21c,unaff_EBP + -0x118);
    pcVar1 = _strrchr((char *)(unaff_EBP + -0x21c),0x5c);
    if (pcVar1 != (char *)0x0) {
      *pcVar1 = '\0';
    }
    iVar3 = NPKGetAppCompatFlag(unaff_EBP + -0x118);
    if (iVar3 != -1) {
      NPKSetAppCompatFlag(unaff_EBP + -0x118,0xffffffff);
      *(undefined4 *)(unaff_EBP + -0x14) = 0xe0010003;
      *(undefined4 *)(unaff_EBP + -0x10) = 0xe0010003;
      *(undefined4 *)(unaff_EBP + -4) = 0;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x10,&DAT_00960a58);
    }
    NPKSetDrvPath(unaff_EBP + -0x21c);
    iVar3 = NPKOpenDriver();
    *(int *)(extraout_ECX + 0x3c) = iVar3;
    if (iVar3 < 1) {
      DVar2 = GetLastError();
      if (DVar2 == 0xe0010003) {
        NPKSetAppCompatFlag(unaff_EBP + -0x118,0xffffffff);
      }
      *(DWORD *)(unaff_EBP + -0x14) = DVar2;
      *(undefined4 *)(unaff_EBP + -4) = 1;
      *(DWORD *)(unaff_EBP + -0x10) = DVar2;
                    /* WARNING: Subroutine does not return */
      __CxxThrowException_8(unaff_EBP + -0x10,&DAT_00960a58);
    }
    NPKLoadAtStartup(1);
    NPKRegisterCryptWindowMsg
              (*(undefined4 *)(extraout_ECX + 0x3c),*(undefined4 *)(extraout_ECX + 0x38),0x846);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


