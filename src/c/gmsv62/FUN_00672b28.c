/* FUN_00672b28 - 0x00672b28 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_00672b28(wchar_t *param_1)

{
  HMODULE hModule;
  int iVar1;
  FARPROC pFVar2;
  CHAR aCStack_30 [8];
  wchar_t *pwStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (param_1 == (wchar_t *)0x0) {
    param_1 = u_PCOM_DLL_00969f1c;
  }
  uStack_14 = 0;
  uStack_18 = 0;
  uStack_1c = 0;
  uStack_20 = 0;
  uStack_24 = 0xffffffff;
  aCStack_30[4] = '\0';
  aCStack_30[5] = '\0';
  aCStack_30[6] = '\0';
  aCStack_30[7] = '\0';
  aCStack_30[0] = '\0';
  aCStack_30[1] = '\0';
  aCStack_30[2] = '\0';
  aCStack_30[3] = '\0';
  pwStack_28 = param_1;
  (*DAT_0097b4cc)();
  FUN_0087a1b0();
  (*DAT_0097b4cc)(0,0,param_1,0xffffffff,aCStack_30,0x3fffffff,0,0);
  hModule = LoadLibraryA(aCStack_30);
  if (hModule == (HMODULE)0x0) {
    iVar1 = -0x7ffbfe08;
  }
  else {
    iVar1 = FUN_00672bdb(hModule);
    if (iVar1 == 0) {
      FUN_00672c45();
      iVar1 = -0x7ffbfe07;
    }
    else {
      pFVar2 = GetProcAddress(hModule,s_PcInitModule_00969f0c);
      if (pFVar2 == (FARPROC)0x0) {
        iVar1 = -0x7ffbfe07;
      }
      else {
        iVar1 = (*pFVar2)();
        if (-1 < iVar1) {
          InterlockedIncrement((LONG *)&DAT_0097bb40);
          DAT_0097bc58 = hModule;
          return 0;
        }
      }
      FreeLibrary(hModule);
    }
  }
  return iVar1;
}


