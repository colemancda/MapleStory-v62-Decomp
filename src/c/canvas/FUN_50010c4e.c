/* FUN_50010c4e - 0x50010c4e in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


undefined4 * FUN_50010c4e(void)

{
  char *_Dest;
  HMODULE hModule;
  size_t sVar1;
  FILE *pFVar2;
  undefined4 *puVar3;
  undefined4 *this;
  int unaff_EBP;
  
  FUN_50012d80();
  FUN_50012e10();
  *(undefined4 **)(unaff_EBP + -0x1c) = this;
  this[1] = 0;
  this[2] = 0x1f;
  this[3] = 0;
  *this = &PTR_FUN_5001564c;
  this[4] = 100;
  this[5] = 0x18;
  hModule = DAT_5001da44;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  GetModuleFileNameA(hModule,(LPSTR)(unaff_EBP + -0x81c),0x800);
  sVar1 = strlen((char *)(unaff_EBP + -0x81c));
  if (-1 < (int)sVar1) {
    do {
      if (*(char *)(unaff_EBP + -0x81c + sVar1) == '\\') {
        if ((int)(sVar1 + 1) < 0x800) {
          _Dest = (char *)(unaff_EBP + -0x81b + sVar1);
          *_Dest = '\0';
          strcpy(_Dest,s_List_wz_50019584);
        }
        break;
      }
      sVar1 = sVar1 - 1;
    } while (-1 < (int)sVar1);
    if (-1 < (int)sVar1) {
      pFVar2 = fopen((char *)(unaff_EBP + -0x81c),&DAT_50019580);
      *(FILE **)(unaff_EBP + -0x14) = pFVar2;
      if (pFVar2 != (FILE *)0x0) {
        while( true ) {
          *(undefined4 *)(unaff_EBP + -0x10) = 0;
          sVar1 = fread((void *)(unaff_EBP + -0x10),4,1,*(FILE **)(unaff_EBP + -0x14));
          if (sVar1 != 1) break;
          *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + 1;
          fread((void *)(unaff_EBP + -0x281c),2,*(size_t *)(unaff_EBP + -0x10),
                *(FILE **)(unaff_EBP + -0x14));
          FUN_50001000((uint *)(unaff_EBP + -0x181c),(uint *)(unaff_EBP + -0x281c),
                       *(int *)(unaff_EBP + -0x10) * 2,&DAT_50018090);
          FUN_50011e0d();
          *(undefined1 *)(unaff_EBP + -4) = 1;
          puVar3 = FUN_50011736(this,(int *)(unaff_EBP + -0x18),(undefined4 *)0x0);
          puVar3[3] = 1;
          *(undefined1 *)(unaff_EBP + -4) = 0;
          if (*(int **)(unaff_EBP + -0x18) != (int *)0x0) {
            FUN_500028a0(*(int **)(unaff_EBP + -0x18));
            *(undefined4 *)(unaff_EBP + -0x18) = 0;
          }
        }
        fclose(*(FILE **)(unaff_EBP + -0x14));
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


