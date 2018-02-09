/*
 * openfuzzy.h
 *
 *  Created on: 2018/02/09
 *      Author: toru
 */

#ifndef OPENFUZZY_H_
#define OPENFUZZY_H_

typedef struct {

} FuzzySet;

typedef struct {

} Parameter;

typedef struct {

} Domain;

typedef struct {
	Domain* domain;
} KnowledgeBase;

typedef struct {

} RuleBase;

typedef struct {
	KnowledgeBase* kb;
	RuleBase* rb;
} FIS;

FIS* createFIS();
void deleteFIS(FIS* fis);
void addFuzzySet(KnowledgeBase* kb, FuzzySet* set);
Domain* createDomain();
FuzzySet* createFuzzySet(char* name, int d, Parameter* params[], double (*mv)(double));


#endif /* OPENFUZZY_H_ */
