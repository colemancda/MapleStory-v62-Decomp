/* FUN_51804588 - 0x51804588 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 __cdecl FUN_51804588(void *param_1)

{
  int iVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined1 local_258 [44];
  undefined1 local_22c [275];
  char acStack_119 [261];
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  undefined4 local_8;
  
  local_14 = DAT_5181f890;
  iVar1 = (*DAT_5181f9bc)(DAT_5181f890,acStack_119 + 1,0x104);
  if (iVar1 != 0) {
    for (pcVar4 = acStack_119 + iVar1;
        ((acStack_119 + 1 <= pcVar4 && (*pcVar4 != '/')) && (*pcVar4 != '\\')); pcVar4 = pcVar4 + -1
        ) {
    }
    (*DAT_5181faf0)(pcVar4 + 1,s___acm_5181e380);
    local_c = (*DAT_5181faa4)(acStack_119 + 1,local_258);
    if (local_c != -1) {
      do {
        (*DAT_5181faf0)(pcVar4 + 1,local_22c);
        hModule = LoadLibraryA(acStack_119 + 1);
        if (((hModule != (HMODULE)0x0) &&
            (pFVar2 = GetProcAddress(hModule,s_DriverProc_5181e374), pFVar2 != (FARPROC)0x0)) &&
           ((iVar1 = acmDriverAddA(&local_10,hModule,pFVar2,0,3), iVar1 == 0 &&
            (param_1 != (void *)0x0)))) {
          local_8 = 0;
          iVar1 = acmDriverOpen(&local_8,local_10,0);
          if (iVar1 == 0) {
            puVar3 = (undefined4 *)FUN_518103a3(param_1);
            *puVar3 = local_8;
          }
        }
        iVar1 = (*DAT_5181faa8)(local_c,local_258);
      } while (iVar1 != 0);
      (*DAT_5181faac)(local_c);
      return local_14;
    }
  }
  return 0;
}


