/*
 * main.c
 *
 *  Created on: 2017 Aug 20 15:33:50
 *  Author: JayLocal
 */



#include <xmc_common.h>

/**

 * @brief main() - Application entry point
 *
 * <b>Details of function</b><br>
 * This routine is the application entry point. It is invoked by the device startup code. 
 */

static const uint8_t data[] = "KZ63862ecLKIsc18DPpZvQJYaaT5So3R8BH4ReCRS8dMe0h5dutTQf0hXzm2Hh8o9JHcRs9dVkfl2AAoJOQt0HeNws0DgQSEP5MqvYhAOwj5C6JjjiXDpGusZ0251sDsX1FI5s8ixy9qgCzsUaaAjNC9Y6c3ZNvEM0JePPcJlcnA7S26z8LREO9Flk9z4Fklct6jnsAuABgeXFd2reGqTCTUHzbrFQG4mm7ZQcEPcIbWxESHqM21dZIuswEO4aNt6Tc05mth2stHSWOohT1P8K24aHHRsOJ5nhHv3BMY5Q2REMKfflc3uDTEH6K9h49c16WSPI3pJ9ef1vUdG5jvWVEdytSEjOKodkxEubV0FavvIeY1hQ6465jqNSrL7pWnn9plUf97CMKNfDyDuacNF8d5Px3RBng0Hy6BNF1halJ9SUgTpmHgRy05Qmld1brOcL6wpRi4DQW7zYfMpZV7ECv6SnrNUkHiGPlgdxiner1Hh00i3QWacXLei6xUcwfOXi603EusJi89D245cQW0sRyKsWhxxeOouoZrcgmS96k7bOUy9mRJLJH8FkXQxN7Mo2um0JEVPVB4SykGV2MZwkewokE2WhVy9C2HD6VKXLQaWJlHemwnZ9rpsOGYYoPdsCjySNjGd2CVZLnpqOPoxxvMopQNwCcbwe1H2AIY53M90r5KcHXNJRZlNAiaBRy7znFdwyeX7Mv1zHLAR9SJnvbxbzCQKC0iNg7Mj57aIDCCJxFmFRSCzkifKnUEuhFiiVy3XJoAAcvnlKOnAHMBl2jZgztcffLCit1cjFpT0bbYelwvbJbtvirXQEv5QZSrHDKXzaDozgY9Ag0t2WDGBMRoKlhxLukVejgF0wQb8f3YXAElcOD7IxlNTGD9me2hX5swtq9xgSr0IPbYZB28Et6sjVJWGkmCQ4YEICSPuaO5wfUPt1CuZ1HWgIOofjTqLHLnzrqSjjVV79h5Ot7IbmiqBESUI5Ty07S9fHccqJgolSUvrJmBKa87jonPLnFMdV4Db1UcoIX0zOdYvqU3nNpvNYDSezXSnwZ9J8qm5WgfSboCJQWP3meWq5rrPEbKm22EWcUewAjYp7RiQ2Do9K8vI25jsAxynNLCCxoCgk0B0FBLmp5BYqf1njSc7V1qyIzJJomearw8XWnajGGvyii4ROkfnQcZ2kdDmDlVMDp0G9Y4lHppCP4cSTl2As0VOgwKCmLgYX859U7DYh68CjJoI1lnCcGSy3sTU3bghXQnNMZ6nvoq7eZptxMrJ4MYFSN4mAmocZWDeXZtp5fYFyZ8sTMZLZVQ5LOtGcOEGYz1IA27mgI9fhzSdkJCWViaowKrNBMvrP1jdGZ5hxW92igmdkvEPGwpER3TbQDmdsvERD7vPxPb1VIV47KRyyvS1lCpM6ztD462lM9W9yr3MFzTSzPtUVKqeXZZkK4oZK24uIJma1xT90F3zMQy301EXO3jZaRAu6CFka7o46RFd3vbyhRjSW71r0MUcbe57jx4C6iGjoWoygPKMwHIVZkRwfqVmZGiH1Un1jhEmaE8j8Sq5zyqQ7eFwY8f1c1OWKSNgcwvDZPI5YF5IofLyFDBB1QvrJ60AvmIwyC2yCPFClLM1N884LhEpl0pYmdekpybfockgSLwJkYQ0JXvqtQiwVRmxxZjYgRjq5DNm9GK8VOFDXKhskfbUBJtBba1ONtI7Ge7L3bCvKFB3tV8zPM6jGHPzZCqe0xYT4ZoiXhZ6UzEfKA5WHRRh5ORGWfdmpxKvd4bIIsT9flR3mXxCWRoHtdlzd9vfNdxgsbgsxc7Eo5Y5GQjfDMYxpGE6u3vjpeeT80S10tF4akNK0m8smWjOeVGWQkeVlOh0TBtGFPH76MdHMSfFhNci9BvHTlqgC1pur7CpasLu1cqC2oB462ZQdEwTDHoI2PBk1zb0iuGVDngYTK6LmEPuq6zhPlT9tNlcjnbLbnIf4PGdERPZM8gZ8klAV4t1CEWHcBt5umWI8HyMGHdAl13kMvzVK1bhcxoUdNxu9zSeg2OZVdvxIugLt79Kd2lB8IZN6X3bziZ5r1b9CerKwGLqmEuQlL1mmtmEtNodc4Gftg4TEvbRhXDSXTQBOmGeBi1gascCKEO3ofFeYfreW4VZh2uTULrs3j75mOmQ4jV1HLI3tt6PWXJlm9chpRqPTIl8luoZJRmG9yvSKaAkYoakKJBWI9fxatqlBBPx9mcDa2wfFKzJvOLF9AkGHMcZUx3yQ0EMEcEFRY9xmH2u9gUxRSzZ5mxU0k8Fq4n59aovBOX7DMNk3pHZsYKpU1B65YKgm6zi9mRoedHEv2bJwVVtJ5uRGCM7EF3eIN1nRFl9LvWnEsKpxGzvNXTszc4Ymn8PFhE7taVxb5N7BhcFbJo9KqsP9JF2Nr1Iz2LQ3yAT0Nlem1H1OS1GlpKMKs0aNlERRgdjgG27jpSo1BatvE0uf9v5bVZIN4j9QGLwRNTE3ykEbw7eD9wj4m4P99YM9WmF29U2agKfilZDG14iVEzz8P5XfnNLT9uIhgcmvKguTKQEbHjAkq9hg3bzjksPEj386FqHo0U8Hhe9MUACgnmSLlM2PIAdEu1Z02qSolNkNLigCI3e07dN8YksOf4yE9UHpqh794HwaMcaz7uDQ6kSqSdknPPGLQbdt950A3kusOpSgNUGjb3ntNgIT9ZAfWR3oFY11N6A5CyCyk3FqOOegIhGFaGZa8XQx2dcbpmFHLiY62bsRiixJeaeTAf9NhFHhyiZsndGjDM6ifGEDnch9226vP02ddDpIv2EZuvYf7IRaPfCpViuj9vZPl3i3UtKysdTmXrlolrertnAY7iRmdOVGOTbi3n56qqWn0Q4puwbb1BnEktWjbZnSZezCBcMUk5lHWjpH2b9trG4j6deZAogZY9X4jAWCbE6bskFMzWRzxhUdyxwfUgMaR3Jly7pG0CtAqBgKeAU1JSnnSYJem7HXWEKGBCNV26jtiFUhtDhK0JlP49pfiX314ouhL6Jx3Q4AfSOYBPwXZIiIsWDnhuwBd4Slz6BHmLbM8LASbyrhCP7TmVvL5YYlcJK66oWNZZAv0ql3E50TPGOp8IIMCRamaW0xSE1pbtowUX1A5jUWVdhXkdUv2H8JOMzQ513dtRuMraOR6enmaX49XFx75A6pYSDTsck71RqIIjDwuOPaHNnGpAKe6yUuDDWOqQJaZDLAVVDEoL0r1KVRDu544tVWmfHADI9FJvM6mYlDP203icdJfq4eoEcgOvEZkEMPF74wQraQuqgr4RD53NDehE6YijNyeKQcf8e2ZML1hiqfhvrYTi8jr84AEkm8hSNaTyE0yaaCsiMyC6R7mzH6BA1QIV3rG2zXHmm9mG1yToCAKTgY33v5lDV7dMR0tk12uB0wToq9CkyuIzZncGVipZf10YDl76sYvrsIoZdBpoUzDn7olPDlkKTd1IfhG7t5yfk4cokxrFU7prrR633j4rJJ0XbaOkKZ2hUip01hL0L6eLE3wgpsqzXUwDQFSkC6zn8YKoUWsTlpWOstGkITalccjnzPRNhmFDD4qbJj5YZwbmWcGaSw8KWaoF2RTzHRzZq0Bw5yKfajPEK4cg55IODlgU6e9iAUtJlFfJJpkbfDTBKzGBXjV6gAh4fEOt0fqC4Iow50AFu7uVFBlBnhJh5xmHHDNkfN9zmEBzC1uEvc83fPuliF5gfTWrO49OUJTBpkaObITIMXC7700cdPXLGkFHmcKOoF7jCoHFql5NVH8REy10ep2wBKAJ2watRYM5lrSmCsStPd64xy95xNGVVBJpkoLcc50i0AjO4ljmOPKDDQ0deByPOnOS9sB8U6J0pBZhDkHyjNs7TloGg8Ci8zRTdyYj2PUcsIkCAFCQ7tMRWfsIZaxREwgb9gML0xdRkCjFtjBp0wBZcCaU2142fuuB50raG5WvDWNLvpoISwvaORb6pJb1fXnCKkHbj0wvzz5hnyTFo85hAf72LwoXGUgtT1b3pejAqZhcadtuq2PD8VigXpkuoIEumtgsDNuxFre3sb6kdjHV1j3rXHFFrnbIVYvk6nzMCuCG5ro66fNC";

int main(void)
{
	int i=0;
  /* Placeholder for user application code. The while loop below can be replaced with user application code. */
  while(1U)
  {
	  if(data[i++] == 'a')
		  return;
  }
}